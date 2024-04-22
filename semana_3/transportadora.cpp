#include <iostream>
#include <cstdint>
#include "transportadora.h"
#include "ordem.h"
#include "veiculos.h"
#include "veiculo_transporte.h"

using namespace std;

Transportadora::Transportadora() {};
Transportadora::Transportadora(list<Ordem*> ordens) : ordens(ordens) {};
Transportadora::~Transportadora() {};

Veiculos Transportadora::getVeiculosDisponiveis() const {
    return this->veiculosDisponiveis;
}

Veiculos Transportadora::getVeiculosEmTransito() const {
    return this->veiculosEmTransito;
}

int32_t Transportadora::adicionarOrdem(Ordem* ordem) {
    this->ordens.push_back(ordem);

    return 1;
}

void Transportadora::atenderOrdens() {
    for (Ordem* const& ordem : this->ordens) {
        VeiculoTransporte* veiculo = this->veiculosDisponiveis.buscarVeiculoCapacidade(ordem->getCapacidadeNecessaria());

        if (veiculo != NULL) {
            this->veiculosDisponiveis.removerVeiculoPorId(veiculo->getId());
            this->veiculosEmTransito.adicionarVeiculo(veiculo);
            cout << ordem << " atendida com sucesso por " << veiculo << endl;
        } else {
            cout << "Nenhum veiculo disponivel para atender a " << ordem << endl;
        }
    }
}
