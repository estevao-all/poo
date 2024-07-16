from classes.vehicles.vehicle import Vehicle
from classes.coordinates import Coordinates

class Van(Vehicle):
    def __init__(self, plate: str, model: str, year: int, weight_supported: float, volume_supported: float, coordinates: Coordinates) -> None:
        super().__init__(plate, model, year, weight_supported, volume_supported, coordinates)
