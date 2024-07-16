from classes.coordinates import Coordinates
from classes.order import Order

class Vehicle:
    def __init__(self, plate: str, model: str, year: int, weight_supported: float, volume_supported: float, coordinates: Coordinates) -> None:
        self.plate = plate
        self.model = model
        self.year = year
        self.weight_supported = weight_supported
        self.volume_supported = volume_supported
        self.coordinates = coordinates

        self.assigned_orders: list[Order] = []

    def __str__(self) -> str:
        return f"Vehicle - {self.model} ({self.plate})"

    def get_used_weight(self) -> float:
        return sum(order.weight for order in self.assigned_orders)

    def get_used_volume(self) -> float:
        return sum(order.volume for order in self.assigned_orders)
