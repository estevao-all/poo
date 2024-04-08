#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <cstdint>

using namespace std;

class Cliente {
    private:
        string nome;
        string cpf;
        int32_t idade;
        string telefone;
        string endereco;
        string sexo;

    public:
        Cliente(string nome, string cpf, int32_t idade, string telefone, string endereco, string sexo);
        ~Cliente();

        int32_t setNome(string nome);

        string getNome();

        int32_t setCpf(string cpf);

        string getCpf();

        int32_t setIdade(int32_t idade);

        int32_t getIdade();

        int32_t setTelefone(string telefone);

        string getTelefone();

        int32_t setEndereco(string endereco);

        string getEndereco();

        int32_t setSexo(string sexo);

        string getSexo();
};

#endif
