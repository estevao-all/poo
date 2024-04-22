#ifndef VEICULO_TRANSPORTE_H
#define VEICULO_TRANSPORTE_H

#include <iostream>
#include <cstdint>
#include "coordenada.h"
#include "id.h"

using namespace std;

class VeiculoTransporte {
    private:
        Id id;
        string placa;
        Coordenada coordenada;
        int32_t capacidade;

    public:
        VeiculoTransporte(string placa, Coordenada coordenada, int32_t capacidade);
        ~VeiculoTransporte();

        int32_t getId() const;

        int32_t setPlaca(string placa);
        string getPlaca() const;

        int32_t setCoordenada(Coordenada cooordenada);
        Coordenada getCoordenada() const;

        int32_t setCapacidade(int32_t capacidade);
        int32_t getCapacidade() const;

        bool operator==(const VeiculoTransporte& other) const;
        friend ostream& operator<<(ostream& os, const VeiculoTransporte& veiculo);
};

#endif
