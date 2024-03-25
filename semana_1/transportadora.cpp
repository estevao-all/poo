#include <iostream>

using namespace std;

class Veiculo {
    private:
        string modelo;
        int32_t ano;
        int32_t chassi;
        int32_t capacidade;
        string localizacao;

    public:
        Veiculo(string modelo, int32_t ano, int32_t chassi, int32_t capacidade, string localizacao) {
            for (char& c : modelo) c = toupper(c);

            if (modelo != "CARRO" && modelo != "MOTO" && modelo != "CAMINHAO") {
                cout << "Modelo de veiculo invalido" << endl;
                return;
            }

            this->modelo = modelo;
            this->ano = ano;
            this->chassi = chassi;
            this->capacidade = capacidade;
            this->localizacao = localizacao;
        }

        void setModelo(string modelo) {
            for (char& c : modelo) c = toupper(c);

            if (modelo != "CARRO" && modelo != "MOTO" && modelo != "CAMINHAO") {
                cout << "Modelo de veiculo invalido" << endl;
                return;
            }

            this->modelo = modelo;
        }

        string getModelo() {
            return this->modelo;
        }

        void setAno(int32_t ano) {
            this->ano = ano;
        }

        int32_t getAno() {
            return this->ano;
        }

        void setChassi(int32_t chassi) {
            this->chassi = chassi;
        }

        int32_t getChassi() {
            return this->chassi;
        }

        void setCapacidade(int32_t capacidade) {
            this->capacidade = capacidade;
        }

        int32_t getCapacidade() {
            return this->capacidade;
        }

        void setLocalizacao(string localizacao) {
            this->localizacao = localizacao;
        }

        string getLocalizacao() {
            return this->localizacao;
        }
};

class Cliente {
    private:
        string nome;
        string cpf;
        int32_t idade;
        string telefone;
        string endereco;
        string sexo;

    public:
        Cliente(string nome, string cpf, int32_t idade, string telefone, string endereco, string sexo) {
            this->nome = nome;
            this->cpf = cpf;
            this->idade = idade;
            this->telefone = telefone;
            this->endereco = endereco;
            this->sexo = sexo;
        }

        void setNome(string nome) {
            this->nome = nome;
        }

        string getNome() {
            return this->nome;
        }

        void setCpf(string cpf) {
            this->cpf = cpf;
        }

        string getCpf() {
            return this->cpf;
        }

        void setIdade(int32_t idade) {
            this->idade = idade;
        }

        int32_t getIdade() {
            return this->idade;
        }

        void setTelefone(string telefone) {
            this->telefone = telefone;
        }

        string getTelefone() {
            return this->telefone;
        }

        void setEndereco(string endereco) {
            this->endereco = endereco;
        }

        string getEndereco() {
            return this->endereco;
        }

        void setSexo(string sexo) {
            this->sexo = sexo;
        }

        string getSexo() {
            return this->sexo;
        }
};

class Transporte {
    private:
        Cliente solicitador;
        string tipo;
        string localColeta;
        string localEntrega;
        int32_t pesoCarga;
        int32_t volumeCarga;

    public:
        Transporte(Cliente solicitador, string tipo, string localColeta, string localEntrega, int32_t pesoCarga, int32_t volumeCarga) : solicitador(solicitador) {
            this->tipo = tipo;
            this->localColeta = localColeta;
            this->localEntrega = localEntrega;
            this->pesoCarga = pesoCarga;
            this->volumeCarga = volumeCarga;
        }

        void setSolicitador(Cliente solicitador) {
            this->solicitador = solicitador;
        }

        Cliente getSolicitador() {
            return this->solicitador;
        }

        void setTipo(string tipo) {
            this->tipo = tipo;
        }

        string getTipo() {
            return this->tipo;
        }

        void setLocalColeta(string localColeta) {
            this->localColeta = localColeta;
        }

        string getLocalColeta() {
            return this->localColeta;
        }

        void setLocalEntrega(string localEntrega) {
            this->localEntrega = localEntrega;
        }

        string getLocalEntrega() {
            return this->localEntrega;
        }

        void setPesoCarga(int32_t pesoCarga) {
            this->pesoCarga = pesoCarga;
        }

        int32_t getPesoCarga() {
            return this->pesoCarga;
        }

        void setVolumeCarga(int32_t volumeCarga) {
            this->volumeCarga = volumeCarga;
        }

        int32_t getVolumeCarga() {
            return this->volumeCarga;
        }
};

int main() {
    Veiculo veiculo("CARRO", 2021, 123456, 5, "Rua 1, 123");
    cout << "Modelo: " << veiculo.getModelo() << endl;

    Cliente cliente("Joao", "123.456.789-10", 25, "+55 55 999887766", "Rua 2, 456", "Masculino");
    cout << "Nome: " << cliente.getNome() << endl;

    Transporte transporte(cliente, "Rapido", "Rua 1, 123", "Rua 2, 456", 10, 5);
    cout << "Transporte do tipo: " << transporte.getTipo() << " para " << transporte.getSolicitador().getNome() << endl;

    return 0;
}