#ifndef TRANSPORTADORA_H
#define TRANSPORTADORA_H

#include <iostream>
#include <cstdint>
#include <list>
#include "ordem.h"
#include "veiculos.h"

using namespace std;

class Transportadora {
    private:
        list<Ordem*> ordens;
        Veiculos veiculosDisponiveis;
        Veiculos veiculosEmTransito;

    public:
        Transportadora();
        Transportadora(list<Ordem*> ordens);
        ~Transportadora();

        Veiculos getVeiculosDisponiveis() const;
        Veiculos getVeiculosEmTransito() const;

        int32_t adicionarOrdem(Ordem* ordem);
        void atenderOrdens();
};

#endif
