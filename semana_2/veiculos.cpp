#include <iostream>
#include <cstdint>
#include <list>
#include "veiculos.h"
#include "veiculo.h"

using namespace std;

Veiculos::Veiculos(list<Veiculo> veiculos) {
    this->veiculos = veiculos;
};

Veiculos::~Veiculos() {};

int Veiculos::adicionarVeiculo(Veiculo veiculo) {
    this->veiculos.push_back(veiculo);

    return 1;
};

int Veiculos::removerVeiculo(string placa) {
    for (auto it = this->veiculos.begin(); it != this->veiculos.end(); it++) {
        if (it->getPlaca() == placa) {
            this->veiculos.erase(it);

            return 1;
        }
    }

    return 0;
};

list<Veiculo> Veiculos::getVeiculos() {
    return this->veiculos;
};

Veiculo* Veiculos::buscarVeiculoPlaca(string placa) {
    for (auto it = this->veiculos.begin(); it != this->veiculos.end(); it++) {
        if (it->getPlaca() == placa) {
            return &*it;
        }
    }

    return NULL;
};

Veiculo* Veiculos::buscarVeiculoLocalizacao(string localizacao) {
    for (auto it = this->veiculos.begin(); it != this->veiculos.end(); it++) {
        if (it->getLocalizacao() == localizacao) {
            return &*it;
        }
    }

    return NULL;
};
