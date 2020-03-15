#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <iostream>
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ~ContaEspecial(); 

        ContaEspecial(double salario, std::string nomeCliente, double saldo, int numeroConta); 

        double definirLimite();
        std::string toString();
};

#endif
