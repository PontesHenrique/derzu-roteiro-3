#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <iostream>
#include "Conta.h"

class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ~ContaCorrente();

        ContaCorrente(double salario, std::string nomeCliente, double saldo, int numeroConta);
        
        void setSalario(double salario);

        double getSalario();
        double getLimite();

        virtual double definirLimite();
        virtual std::string toString();

    protected:
        double salario;
        double limite;
};

#endif