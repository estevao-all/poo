#include <iostream>
#include <cstdint>
#include "veiculo.h"

using namespace std;

Veiculo::Veiculo(int32_t ano, string placa, int32_t capacidadePeso, int32_t capacidadeVolume, string localizacao) {
    this->ano = ano;
    this->placa = placa;
    this->capacidadePeso = capacidadePeso;
    this->capacidadeVolume = capacidadeVolume;
    this->localizacao = localizacao;
}

Veiculo::~Veiculo() {}

int Veiculo::setAno(int32_t ano) {
    this->ano = ano;

    return 1;
}

int32_t Veiculo::getAno() {
    return this->ano;
}

int Veiculo::setPlaca(string placa) {
    this->placa = placa;

    return 1;
}

string Veiculo::getPlaca() {
    return this->placa;
}

int Veiculo::setCapacidadePeso(int32_t capacidadePeso) {
    if (capacidadePeso < 0) {
        return 0;
    }

    this->capacidadePeso = capacidadePeso;

    return 1;
}

int32_t Veiculo::getCapacidadePeso() {
    return this->capacidadePeso;
}

int Veiculo::setCapacidadeVolume(int32_t capacidadeVolume) {
    if (capacidadeVolume < 0) {
        return 0;
    }

    this->capacidadeVolume = capacidadeVolume;

    return 1;
}

int32_t Veiculo::getCapacidadeVolume() {
    return this->capacidadeVolume;
}

int Veiculo::setLocalizacao(string localizacao) {
    this->localizacao = localizacao;

    return 1;
}

string Veiculo::getLocalizacao() {
    return this->localizacao;
}
