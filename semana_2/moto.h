#ifndef MOTO_H
#define MOTO_H

#include <iostream>
#include <cstdint>
#include "veiculo.h"

using namespace std;

class Moto : public Veiculo {
    public:
        Moto(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao);
        ~Moto();
};

#endif
