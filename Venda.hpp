
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
    double valor;
    string descricao;
    Especialista specialist;
    string cliente;


    void print() {

        std::cout << "Especialista: ";
        cout << specialist.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }
};

#endif
