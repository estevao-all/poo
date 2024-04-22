#ifndef CARRO_TRANSPORTE_H
#define CARRO_TRANSPORTE_H

#include <iostream>
#include <cstdint>
#include "veiculo_transporte.h"
#include "coordenada.h"

using namespace std;

class CarroTransporte : public VeiculoTransporte {
    public:
        CarroTransporte(string placa, Coordenada coordenada, int32_t capacidade);
        ~CarroTransporte();
};

#endif
