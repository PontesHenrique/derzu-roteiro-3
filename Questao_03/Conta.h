#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>
#include <sstream>

class Conta
{
    public:
        Conta();
        ~Conta();

        Conta(std::string nomeCliente, double saldo, int numeroConta);
        
        void setNomeCliente(std::string nomeCliente);
        void setSaldo(double saldo);
        void setNumeroConta(int numeroConta);

        std::string getNomeCliente();
        double getSaldo();
        int getNumeroConta();

        void Sacar(double valor);
        void Depositar(double valor);

    protected:
        std::string nomeCliente;
        double saldo;
        int numeroConta;
};

#endif
