from classes.customer import Customer
from classes.coordinates import Coordinates

class Order:
    _current_id = 0

    def __init__(self, customer: Customer, pickup_address: Coordinates, delivery_address: Coordinates, weight: float, volume: float, is_priority: bool) -> None:
        self.customer = customer
        self.pickup_address = pickup_address
        self.delivery_address = delivery_address
        self.weight = weight
        self.volume = volume
        self.is_priority = is_priority

        self.__class__._current_id += 1
        self._id = self.__class__._current_id

    def __str__(self) -> str:
        return f"Order for {self.customer} - {self.id}: {self.pickup_address} -> {self.delivery_address} ({self.weight}kg, {self.volume}m³; {'priority order' if self.is_priority else 'normal order'})"

    @property
    def id(self) -> int:
        return self._id
