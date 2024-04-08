#include <iostream>
#include <cstdint>
#include "transporte.h"
#include "cliente.h"

using namespace std;

Transporte::Transporte(Cliente solicitador, string localColeta, string localEntrega, int32_t pesoCarga, int32_t volumeCarga) : solicitador(solicitador) {
    this->localColeta = localColeta;
    this->localEntrega = localEntrega;
    this->pesoCarga = pesoCarga;
    this->volumeCarga = volumeCarga;
}

Transporte::~Transporte() {}

int32_t Transporte::setSolicitador(Cliente solicitador) {
    this->solicitador = solicitador;

    return 1;
}

Cliente Transporte::getSolicitador() {
    return this->solicitador;
}

int32_t Transporte::setLocalColeta(string localColeta) {
    this->localColeta = localColeta;

    return 1;
}

string Transporte::getLocalColeta() {
    return this->localColeta;
}

int32_t Transporte::setLocalEntrega(string localEntrega) {
    this->localEntrega = localEntrega;

    return 1;
}

string Transporte::getLocalEntrega() {
    return this->localEntrega;
}

int32_t Transporte::setPesoCarga(int32_t pesoCarga) {
    if (pesoCarga < 0) {
        return 0;
    }

    this->pesoCarga = pesoCarga;

    return 1;
}

int32_t Transporte::getPesoCarga() {
    return this->pesoCarga;
}

int32_t Transporte::setVolumeCarga(int32_t volumeCarga) {
    if (volumeCarga < 0) {
        return 0;
    }

    this->volumeCarga = volumeCarga;

    return 1;
}

int32_t Transporte::getVolumeCarga() {
    return this->volumeCarga;
}
