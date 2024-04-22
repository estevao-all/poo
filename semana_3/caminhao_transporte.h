#ifndef CAMINHAO_TRANSPORTE_H
#define CAMINHAO_TRANSPORTE_H

#include <iostream>
#include <cstdint>
#include "veiculo_transporte.h"
#include "coordenada.h"

using namespace std;

class CaminhaoTransporte : public VeiculoTransporte {
    public:
        CaminhaoTransporte(string placa, Coordenada coordenada, int32_t capacidade);
        ~CaminhaoTransporte();
};

#endif
