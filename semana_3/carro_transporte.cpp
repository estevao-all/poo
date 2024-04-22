#include <iostream>
#include <cstdint>
#include "veiculo_transporte.h"
#include "carro_transporte.h"
#include "coordenada.h"

using namespace std;

CarroTransporte::CarroTransporte(string placa, Coordenada coordenada, int32_t capacidade)
    : VeiculoTransporte(placa, coordenada, capacidade) {};
CarroTransporte::~CarroTransporte() {};
