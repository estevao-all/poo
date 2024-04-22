#include <iostream>
#include <cstdint>
#include <list>
#include "veiculos.h"
#include "veiculo_transporte.h"
#include "coordenada.h"

using namespace std;

Veiculos::Veiculos() {};
Veiculos::Veiculos(list<VeiculoTransporte*> veiculos)
    : veiculos(veiculos) {};
Veiculos::~Veiculos() {};

int32_t Veiculos::adicionarVeiculo(VeiculoTransporte* veiculo) {
    this->veiculos.push_back(veiculo);

    return 1;
};

VeiculoTransporte* Veiculos::removerVeiculoPorId(int32_t id) {
    for (VeiculoTransporte* const& veiculo : this->veiculos) {
        if (veiculo->getId() == id) {
            this->veiculos.remove(veiculo);
            return veiculo;
        }
    }

    return NULL;
};

VeiculoTransporte* Veiculos::removerVeiculoPorPlaca(string placa) {
    for (VeiculoTransporte* const& veiculo : this->veiculos) {
        if (veiculo->getPlaca() == placa) {
            this->veiculos.remove(veiculo);
            return veiculo;
        }
    }

    return NULL;
};

list<VeiculoTransporte*> Veiculos::getVeiculos() {
    return this->veiculos;
};

VeiculoTransporte* Veiculos::getVeiculoPorId(int32_t id) {
    for (VeiculoTransporte* const& veiculo : this->veiculos) {
        if (veiculo->getId() == id) {
            return veiculo;
        }
    }

    return NULL;
};

VeiculoTransporte* Veiculos::getVeiculoPorPlaca(string placa) {
    for (VeiculoTransporte* const& veiculo : this->veiculos) {
        if (veiculo->getPlaca() == placa) {
            return veiculo;
        }
    }

    return NULL;
};

VeiculoTransporte* Veiculos::buscarVeiculoPerto(Coordenada coordenada) {
    VeiculoTransporte* veiculoMaisProximo = NULL;
    double menorDistancia = -1;

    for (VeiculoTransporte* const& veiculo : this->veiculos) {
        double distancia = veiculo->getCoordenada().distancia(coordenada);

        if (menorDistancia == -1 || distancia < menorDistancia) {
            menorDistancia = distancia;
            veiculoMaisProximo = veiculo;
        }
    }

    return veiculoMaisProximo;
};

VeiculoTransporte* Veiculos::buscarVeiculoCapacidade(int32_t capacidade) {
    for (VeiculoTransporte* const& veiculo : this->veiculos) {
        if (veiculo->getCapacidade() >= capacidade) {
            return veiculo;
        }
    }

    return NULL;
};