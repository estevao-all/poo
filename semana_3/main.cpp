#include <iostream>
#include "coordenada.h"
#include "caminhao_transporte.h"
#include "carro_transporte.h"
#include "ordem.h"
#include "transportadora.h"

using namespace std;

int main() {
    CaminhaoTransporte *caminhao = new CaminhaoTransporte("ABC-1234", Coordenada(0, 0), 1000);
    CarroTransporte *carro = new CarroTransporte("DEF-5678", Coordenada(100, 100), 500);

    Ordem *ordem1 = new Ordem("123.456.789-00", "João", Coordenada(0, 0), 800);
    Ordem *ordem2 = new Ordem("987.654.321-00", "Maria", Coordenada(100, 100), 300);

    Transportadora *transportadora = new Transportadora();
    transportadora->adicionarOrdem(ordem1);
    transportadora->adicionarOrdem(ordem2);

    transportadora->getVeiculosDisponiveis().adicionarVeiculo(caminhao);
    transportadora->getVeiculosDisponiveis().adicionarVeiculo(carro);

    transportadora->atenderOrdens();

    return 0;
}
