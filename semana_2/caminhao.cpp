#include <iostream>
#include <cstdint>
#include "veiculo.h"
#include "caminhao.h"

using namespace std;

Caminhao::Caminhao(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao) : Veiculo(ano, placa, capacidadePeso, capacidadeVolume, localizacao) {};
Caminhao::~Caminhao() {};
