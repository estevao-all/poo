from classes.vehicles.vehicle import Vehicle
from classes.coordinates import Coordinates
from geopy.distance import distance as geopy_distance

class Garage:
    def __init__(self, cars: list[Vehicle] = []):
        self.cars = cars

    def add_car(self, car: Vehicle) -> None:
        self.cars.append(car)

    def remove_car(self, car: Vehicle) -> None:
        self.cars.remove(car)

    def get_car_by_plate(self, plate: str) -> Vehicle:
        for car in self.cars:
            if car.plate == plate:
                return car

        return None

    def get_cars_within_distance(self, coordinates: Coordinates, distance: float) -> list[Vehicle]:
        cars_within_distance = []
        for car in self.cars:
            if geopy_distance(car.coordinates.point, coordinates.point).km <= distance:
                cars_within_distance.append(car)

        return cars_within_distance

    def get_cars_within_capacity(self, weight: float, volume: float) -> list[Vehicle]:
        cars_within_capacity = []
        for car in self.cars:
            if car.get_used_weight() + weight <= car.weight_supported and car.get_used_volume() + volume <= car.volume_supported:
                cars_within_capacity.append(car)

        return cars_within_capacity
