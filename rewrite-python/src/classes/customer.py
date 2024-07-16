import re

from classes.coordinates import Coordinates

email_regex = re.compile(r"(^[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+$)")

class Customer:
    _current_id = 0

    def __init__(self, name: str, cpf: str, address: Coordinates, phone_number: str, email: str) -> None:
        self.name = name

        self.cpf = cpf
        self.address = address
        self._phone_number = phone_number

        if not re.match(email_regex, email):
            raise ValueError("Invalid email")

        self._email = email

        self.__class__._current_id += 1
        self._id = self.__class__._current_id

    def __str__(self) -> str:
        return f"{self.name} ({self.cpf})"

    @property
    def id(self) -> int:
        return self._id

    @property
    def phone_number(self) -> str:
        return self._phone_number

    @phone_number.setter
    def phone_number(self, phone_number: str) -> None:
        self._phone_number = phone_number

    @property
    def email(self) -> str:
        return self._email

    @email.setter
    def email(self, email: str) -> None:
        if not re.match(email_regex, email):
            raise ValueError("Invalid email")

        self._email = email
