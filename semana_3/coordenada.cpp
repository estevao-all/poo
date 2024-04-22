#include <iostream>
#include <cstdint>
#include <cmath>
#include "coordenada.h"

using namespace std;

Coordenada::Coordenada(double x, double z) {
    if (x < 0 || z < 0) {
      throw invalid_argument("Coordenada não pode ser negativa");
    }

    this->x = x;
    this->z = z;
}

Coordenada::~Coordenada() {};

int32_t Coordenada::setCoordenada(double x, double z) {
    if (x < 0 || z < 0) {
        return 0;
    }

    this->x = x;
    this->z = z;

    return 1;
}

double Coordenada::getX() const {
    return this->x;
}

double Coordenada::getZ() const {
    return this->z;
}

double Coordenada::distancia(Coordenada coordenada) const {
    return sqrt(pow(this->x - coordenada.getX(), 2) + pow(this->z - coordenada.getZ(), 2));
}

bool Coordenada::operator==(const Coordenada& other) const {
    return this->x == other.x && this->z == other.z;
}

ostream& operator<<(ostream& os, const Coordenada& coordenada) {
    os << "(" << coordenada.x << ", " << coordenada.z << ")";
    return os;
}
