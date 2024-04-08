#ifndef VEICULOS_H
#define VEICULOS_H

#include <iostream>
#include <cstdint>
#include <list>
#include "veiculo.h"

using namespace std;

class Veiculos {
    private:
        list<Veiculo> veiculos;

    public:
        Veiculos(list<Veiculo> veiculos);
        ~Veiculos();

        int adicionarVeiculo(Veiculo veiculo);

        int removerVeiculo(string placa);

        list<Veiculo> getVeiculos();

        Veiculo* buscarVeiculoPlaca(string placa);

        Veiculo* buscarVeiculoLocalizacao(string localizacao);
};

#endif