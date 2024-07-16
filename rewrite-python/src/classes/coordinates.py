from geopy.distance import geodesic
from geopy.point import Point
from random import uniform

class Coordinates:
    def __init__(self, latitude: float, longitude: float, address: str | None = None) -> None:
        self.point = Point(latitude, longitude)
        self.address = address

    def __str__(self) -> str:
        return f"Coordinates {self.point.latitude} {self.point.longitude}{f" -> {self.address}" if self.address else ""}"

    @classmethod
    def get_coordinates_from_address(cls, address: str | None = None) -> 'Coordinates':
        # To avoid having to fetch a lot of addresses from using an API, we are gonna simply generate a random coordinate for them
        return cls.random(address)

    @classmethod
    def random(cls, address: str | None = None) -> 'Coordinates':
        point = geodesic(kilometers=uniform(0.2, 100)).destination(Point(0, 0), uniform(0, 360))
        return cls(point.latitude, point.longitude, address)
