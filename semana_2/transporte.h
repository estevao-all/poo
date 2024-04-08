#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include <iostream>
#include <cstdint>
#include "cliente.h"

using namespace std;

class Transporte {
    private:
        Cliente solicitador;
        string localColeta;
        string localEntrega;
        int32_t pesoCarga;
        int32_t volumeCarga;

    public:
        Transporte(Cliente solicitador, string localColeta, string localEntrega, int32_t pesoCarga, int32_t volumeCarga);
        ~Transporte();

        int32_t setSolicitador(Cliente solicitador);

        Cliente getSolicitador();

        int32_t setLocalColeta(string localColeta);

        string getLocalColeta();

        int32_t setLocalEntrega(string localEntrega);

        string getLocalEntrega();

        int32_t setPesoCarga(int32_t pesoCarga);

        int32_t getPesoCarga();

        int32_t setVolumeCarga(int32_t volumeCarga);

        int32_t getVolumeCarga();
};

#endif