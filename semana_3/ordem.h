#ifndef ORDEM_H
#define ORDEM_H

#include <iostream>
#include <cstdint>
#include "coordenada.h"
#include "id.h"

using namespace std;

class Ordem {
    private:
        Id id;
        string cpfSolicitador;
        string nomeSolicitador;
        Coordenada coordenada;
        int32_t capacidadeNecessaria;

    public:
        Ordem(string cpfSolicitador, string nomeSolicitador, Coordenada coordenada, int32_t capacidadeNecessaria);
        ~Ordem();

        int32_t getId() const;

        int32_t setCpfSolicitador(string cpfSolicitador);
        string getCpfSolicitador() const;

        int32_t setNomeSolicitador(string nomeSolicitador);
        string getNomeSolicitador() const;

        int32_t setCoordenada(Coordenada cooordenada);
        Coordenada getCoordenada() const;

        int32_t setCapacidadeNecessaria(int32_t capacidadeNecessaria);
        int32_t getCapacidadeNecessaria() const;

        bool operator==(const Ordem& other) const;
        friend ostream& operator<<(ostream& os, const Ordem& ordem);
};

#endif
