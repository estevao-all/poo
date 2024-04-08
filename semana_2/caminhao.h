#ifndef CAMINHAO_H
#define CAMINHAO_H

#include <iostream>
#include <cstdint>
#include "veiculo.h"

using namespace std;

class Caminhao : public Veiculo {
    public:
        Caminhao(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao);
        ~Caminhao();
};

#endif
