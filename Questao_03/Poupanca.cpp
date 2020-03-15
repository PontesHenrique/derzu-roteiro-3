#include "Poupanca.h"

using namespace std;

Poupanca::Poupanca() 
: Conta(){
    taxaRendimento = variacao = 0;
}

Poupanca::~Poupanca(){
    //destroi
}

Poupanca::Poupanca(double taxaRendimento, int variacao, std::string nomeCliente, double saldo, int numeroConta)
: Conta(nomeCliente, saldo, numeroConta){
    setTaxaRendimento(taxaRendimento);
    setVariacao(variacao);
}

void Poupanca::setTaxaRendimento(double taxaRendimento){
    if(taxaRendimento > 0)
        this->taxaRendimento = taxaRendimento/100;
    else
        this->taxaRendimento = 0;
}

void Poupanca::setVariacao(int variacao){
    if(variacao == 51 || variacao == 1)
        this->variacao = variacao;
    else{
        cout << "Valor invalido! Setado para 0." << endl;
        this->variacao = 0;
    }
}

double Poupanca::getTaxaRendimento(){
    return taxaRendimento;
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::Render(){
    if(variacao == 1){
        return saldo += ((taxaRendimento + (0.5/100)) * saldo);
    }else if(variacao == 51){
        return saldo += (taxaRendimento * saldo);
    }else{
        cout << "Rendimento invalido devido a variacao invalida." << endl;
        return -1;
    }
}

string Poupanca::toString(){
    stringstream resumo;

    resumo << "\n\nPoupanca\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da Conta: " << numeroConta << endl
        << "Saldo: " << saldo << " R$" << endl
        << "Variacao: " << variacao << endl
        << "Taxa de rendimento: " << taxaRendimento << endl
        << "Saldo pos rendimento: " << Render() << endl;

    return resumo.str();
}
