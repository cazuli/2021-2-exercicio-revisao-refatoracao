#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double percentual = 0.1;


class Especialista : public Funcionario {
    
    public:
        string especialidade;

    double comissao(double ValorVenda) {
        return ValorVenda*percentual;
    }


    void print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();



        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
