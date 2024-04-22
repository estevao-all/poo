#ifndef VEICULOS_H
#define VEICULOS_H

#include <iostream>
#include <cstdint>
#include <list>
#include "veiculo_transporte.h"

using namespace std;

class Veiculos {
    private:
        list<VeiculoTransporte*> veiculos;

    public:
        Veiculos();
        Veiculos(list<VeiculoTransporte*> veiculos);
        ~Veiculos();

        int32_t adicionarVeiculo(VeiculoTransporte* veiculo);
        VeiculoTransporte* removerVeiculoPorId(int32_t id);
        VeiculoTransporte* removerVeiculoPorPlaca(string placa);

        list<VeiculoTransporte*> getVeiculos();
        VeiculoTransporte* getVeiculoPorId(int32_t id);
        VeiculoTransporte* getVeiculoPorPlaca(string placa);

        VeiculoTransporte* buscarVeiculoPerto(Coordenada coordenada);
        VeiculoTransporte* buscarVeiculoCapacidade(int32_t capacidade);
};

#endif