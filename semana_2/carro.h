#ifndef CARRO_H
#define CARRO_H

#include <iostream>
#include <cstdint>
#include "veiculo.h"

using namespace std;

class Carro : public Veiculo {
    public:
        Carro(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao);
        ~Carro();
};

#endif
