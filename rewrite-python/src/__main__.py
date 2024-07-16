from random import uniform

from classes.garage import Garage
from classes.manager import Manager
from classes.vehicles.van import Van
from classes.coordinates import Coordinates

def random_plate():
    return f"{chr(int(uniform(65, 91)))}{chr(int(uniform(65, 91)))}{chr(int(uniform(65, 91)))}-{int(uniform(1000, 9999))}"

def main():
    vans = [Van(random_plate(), "Van do Sedex", 2020, uniform(1000, 15000), uniform(1, 10), Coordinates.random()) for _ in range(100)]

    garage = Garage(vans)
    manager = Manager.from_csv(garage, "./dados_entregas.csv")

    manager.fullfill_orders()

if __name__ == "__main__":
    main()
