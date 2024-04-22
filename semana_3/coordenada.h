#ifndef COORDENADA_H
#define COORDENADA_H

#include <iostream>
#include <cstdint>

using namespace std;

class Coordenada {
    private:
        double x;
        double z;

    public:
        Coordenada(double x, double z);
        ~Coordenada();

        int32_t setCoordenada(double x, double z);

        double getX() const;
        double getZ() const;

        double distancia(Coordenada coordenada) const;

        bool operator==(const Coordenada& other) const;
        friend ostream& operator<<(ostream& os, const Coordenada& coordenada);
};

#endif
