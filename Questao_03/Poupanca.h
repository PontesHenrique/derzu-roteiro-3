#ifndef POUPANCA_H
#define POUPANCA_H

#include <iostream>
#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca();
        ~Poupanca();

        Poupanca(double taxaRendimento, int variacao, std::string nomeCliente, double saldo, int numeroConta);

        void setTaxaRendimento(double taxaRendimento);
        void setVariacao(int variacao);

        double getTaxaRendimento();
        int getVariacao();

        double Render();
        std::string toString();

    private:
        double taxaRendimento;
        int variacao;
};

#endif
