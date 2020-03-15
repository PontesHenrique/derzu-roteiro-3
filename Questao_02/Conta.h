#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "iConta.h"

//classe Conta herda de Iconta
class Conta : public iConta
{
    public:
        Conta();
        ~Conta();
        
        void setNomeCliente(std::string nomeCliente);
        std::string getNomeCliente();
        
        void setSalarioMensal(double salarioMensal);
        double getSalarioMensal();
        
        void setSaldo(double saldo);
        double getSaldo();
        
        void setLimite(double limite);
        double getLimite();
        
        void setNumeroConta(int numeroConta);
		int getNumeroConta();


        void Sacar(double valor);
        void Depositar(double valor);
        void DefinirLimite();

    protected:
    	
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;
        
};

#endif
