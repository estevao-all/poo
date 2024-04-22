#include <iostream>
#include <cstdint>
#include "veiculo_transporte.h"
#include "coordenada.h"

using namespace std;

VeiculoTransporte::VeiculoTransporte(string placa, Coordenada coordenada, int32_t capacidade)
    : placa(placa),
    coordenada(coordenada),
    capacidade(capacidade) {}

VeiculoTransporte::~VeiculoTransporte() {}

int32_t VeiculoTransporte::getId() const {
    return this->id.getId();
}

int32_t VeiculoTransporte::setPlaca(string placa) {
    this->placa = placa;

    return 1;
}

int32_t VeiculoTransporte::setCoordenada(Coordenada coodernada) {
    this->coordenada = coodernada;

    return 1;
}

Coordenada VeiculoTransporte::getCoordenada() const {
    return this->coordenada;
}

string VeiculoTransporte::getPlaca() const {
    return this->placa;
}

int32_t VeiculoTransporte::setCapacidade(int32_t capacidade) {
    if (capacidade < 0) {
        return 0;
    }

    this->capacidade = capacidade;

    return 1;
}

int32_t VeiculoTransporte::getCapacidade() const {
    return this->capacidade;
}


bool VeiculoTransporte::operator==(const VeiculoTransporte& other) const {
    return this->id == other.id;
}

ostream& operator<<(ostream& os, const VeiculoTransporte& veiculo) {
    os << "Veiculo de Transporte com placa: " << veiculo.placa;

    return os;
}
