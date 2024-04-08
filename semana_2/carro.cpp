#include <iostream>
#include <cstdint>
#include "veiculo.h"
#include "carro.h"

using namespace std;

Carro::Carro(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao) : Veiculo(ano, placa, capacidadePeso, capacidadeVolume, localizacao) {};
Carro::~Carro() {};
