#include <iostream>
#include <cstdint>
#include "veiculo.h"
#include "moto.h"

using namespace std;

Moto::Moto(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao) : Veiculo(ano, placa, capacidadePeso, capacidadeVolume, localizacao) {};
Moto::~Moto() {};
