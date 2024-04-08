#include <iostream>
#include <cstdint>
#include "cliente.h"

using namespace std;

Cliente::Cliente(string nome, string cpf, int32_t idade, string telefone, string endereco, string sexo) {
    this->nome = nome;
    this->cpf = cpf;
    this->idade = idade;
    this->telefone = telefone;
    this->endereco = endereco;
    this->sexo = sexo;
}

Cliente::~Cliente() {}

int32_t Cliente::setNome(string nome) {
    this->nome = nome;

    return 1;
}

string Cliente::getNome() {
    return this->nome;
}

int32_t Cliente::setCpf(string cpf) {
    this->cpf = cpf;

    return 1;
}

string Cliente::getCpf() {
    return this->cpf;
}

int32_t Cliente::setIdade(int32_t idade) {
    if (idade < 0) {
        return 0;
    }

    this->idade = idade;

    return 1;
}

int32_t Cliente::getIdade() {
    return this->idade;
}

int32_t Cliente::setTelefone(string telefone) {
    this->telefone = telefone;

    return 1;
}

string Cliente::getTelefone() {
    return this->telefone;
}

int32_t Cliente::setEndereco(string endereco) {
    this->endereco = endereco;

    return 1;
}

string Cliente::getEndereco() {
    return this->endereco;
}

int32_t Cliente::setSexo(string sexo) {
    this->sexo = sexo;

    return 1;
}

string Cliente::getSexo() {
    return this->sexo;
}
