import csv

from classes.garage import Garage
from classes.order import Order
from classes.customer import Customer
from classes.coordinates import Coordinates
import random

class Manager:
    def __init__(self, garage: Garage, orders: list[Order]) -> None:
        self.garage = garage
        self.orders = orders;
        self.fullfilled_orders: list[Order] = []
        self.deferred_orders_by_capacity: list[Order] = []
        self.deferred_orders_by_distance: list[Order] = []
        self.impossible_orders: list[Order] = []

    def add_order(self, order: Order) -> None:
        self.orders.append(order)

    def remove_order(self, order: Order) -> None:
        self.orders.remove(order)

    def get_order_by_id(self, id: int) -> Order:
        for order in self.orders:
            if order.id == id:
                return order

        return None

    def get_orders(self) -> list[Order]:
        return self.orders

    def fullfill_orders(self) -> None:
        self.orders = sorted(self.orders, key=lambda order: order.volume)
        self.orders = sorted(self.orders, key=lambda order: order.weight)
        self.orders = sorted(self.orders, key=lambda order: order.is_priority, reverse=True)

        while len(self.orders) > 0:
            for (index, order) in enumerate(self.orders):
                cars = self.garage.get_cars_within_distance(order.pickup_address, 15)

                if len(cars) == 0:
                    self.deferred_orders_by_distance.append(order)
                    print(f"Order {order.id} (priority = {order.is_priority}) deferred due to distance")
                    continue

                car_found = False
                car_with_total_capacity_found = False

                for car in cars:
                    if car.weight_supported >= order.weight and car.volume_supported >= order.volume:
                        car_with_total_capacity_found = True

                    if car.weight_supported >= (car.get_used_weight() + order.weight) and car.volume_supported >= (car.get_used_volume() + order.volume):
                        car.assigned_orders.append(order)

                        car_found = True
                        break

                if not car_with_total_capacity_found:
                    self.impossible_orders.append(order)
                    print(f"Order {order.id} (priority = {order.is_priority}) impossible to fullfill due to capacity")
                elif not car_found:
                    self.deferred_orders_by_capacity = self.orders[index:]
                    print(f"Orders deferred due to no capacity in available cars")
                    break

            for car in self.garage.cars:
                for order in car.assigned_orders:
                    self.fullfilled_orders.append(order)
                    print(f"{order} (priority = {order.is_priority}) fullfilled by {car}")

                car.assigned_orders = []

            self.orders = self.deferred_orders_by_capacity
            self.deferred_orders_by_capacity = []

        while len(self.deferred_orders_by_distance) > 0:
            order = self.deferred_orders_by_distance.pop(0)
            print(f"Processing distance deferred order {order.id} (priority = {order.is_priority})")

            car = self.garage.get_cars_within_capacity(order.weight, order.volume)

            if len(car) == 0:
                self.impossible_orders.append(order)
                print(f"Order {order.id} (priority = {order.is_priority}) impossible to fullfill due to capacity")
            else:
                car = random.choice(car)
                self.fullfilled_orders.append(order)
                print(f"Order {order} (priority = {order.is_priority}) fullfilled by {car}")

            pass

        print("All orders fullfilled")
        print(f"{len(self.fullfilled_orders)} / {len(self.fullfill_orders) + len(self.impossible_orders)} - {len(self.impossible_orders)} impossible orders")


    @classmethod
    def from_csv(cls, garage: Garage, file_path: str) -> 'Manager':
        orders = []

        with open(file_path, "r", encoding="utf-8") as file:
            reader = csv.reader(file)
            rows = iter(reader)
            next(rows)

            for row in rows:
                customer_name, customer_cpf, customer_address, customer_phone_number, customer_email, pickup_address, delivery_address, weight, volume, is_priority = row

                customer = Customer(customer_name, customer_cpf, Coordinates.get_coordinates_from_address(customer_address.replace("\n", "")), customer_phone_number, customer_email)
                order = Order(customer, Coordinates.get_coordinates_from_address(pickup_address.replace("\n", "")), Coordinates.get_coordinates_from_address(delivery_address.replace("\n", "")), float(weight), float(volume), is_priority == "sim")

                orders.append(order)

        return cls(garage, orders)

