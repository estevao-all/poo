#include <iostream>
#include <cstdint>
#include "veiculo_transporte.h"
#include "caminhao_transporte.h"
#include "coordenada.h"

using namespace std;

CaminhaoTransporte::CaminhaoTransporte(string placa, Coordenada coordenada, int32_t capacidade)
    : VeiculoTransporte(placa, coordenada, capacidade) {};
CaminhaoTransporte::~CaminhaoTransporte() {};
