#include <iostream>
#include <cstdint>
#include "ordem.h"

using namespace std;

Ordem::Ordem(string cpfSolicitador, string nomeSolicitador, Coordenada coordenada, int32_t capacidadeNecessaria)
    : cpfSolicitador(cpfSolicitador),
    nomeSolicitador(nomeSolicitador),
    coordenada(coordenada),
    capacidadeNecessaria(capacidadeNecessaria) {};

Ordem::~Ordem() {};

int32_t Ordem::getId() const {
    return this->id.getId();
}

int32_t Ordem::setCpfSolicitador(string cpfSolicitador) {
    this->cpfSolicitador = cpfSolicitador;

    return 1;
}

string Ordem::getCpfSolicitador() const {
    return this->cpfSolicitador;
}

int32_t Ordem::setNomeSolicitador(string nomeSolicitador) {
    this->nomeSolicitador = nomeSolicitador;

    return 1;
}

string Ordem::getNomeSolicitador() const {
    return this->nomeSolicitador;
}

int32_t Ordem::setCoordenada(Coordenada coordenada) {
    this->coordenada = coordenada;

    return 1;
}

Coordenada Ordem::getCoordenada() const {
    return this->coordenada;
}

int32_t Ordem::setCapacidadeNecessaria(int32_t capacidadeNecessaria) {
    if (capacidadeNecessaria < 0) {
        return 0;
    }

    this->capacidadeNecessaria = capacidadeNecessaria;

    return 1;
}

int32_t Ordem::getCapacidadeNecessaria() const {
    return this->capacidadeNecessaria;
}

bool Ordem::operator==(const Ordem& other) const {
    return this->id == other.id;
}

ostream& operator<<(ostream& os, const Ordem& ordem) {
    os << "Ordem com id " << ordem.getId() << " para " << ordem.nomeSolicitador;

    return os;
}
