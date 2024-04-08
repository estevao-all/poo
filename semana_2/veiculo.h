#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <cstdint>

using namespace std;

class Veiculo {
    private:
        int32_t ano;
        int32_t capacidadePeso;
        int32_t capacidadeVolume;
        string placa;
        string localizacao;

    public:
        Veiculo(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao);
        ~Veiculo();

        int32_t setAno(int32_t ano);

        int32_t getAno();

        int32_t setPlaca(string placa);

        string getPlaca();

        int32_t setCapacidadePeso(int32_t capacidadePeso);

        int32_t getCapacidadePeso();

        int32_t setCapacidadeVolume(int32_t capacidadeVolume);

        int32_t getCapacidadeVolume();

        int32_t setLocalizacao(string localizacao);

        string getLocalizacao();
};

#endif
