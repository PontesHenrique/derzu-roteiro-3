#include "Conta.h"

using namespace std;

Conta::Conta(){
    nomeCliente = " ";
    saldo = numeroConta = 0;
}

Conta::~Conta(){
    //destroi
}

Conta::Conta(std::string nomeCliente, double saldo, int numeroConta){
    setNomeCliente(nomeCliente);
    setSaldo(saldo);
    setNumeroConta(numeroConta);
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setSaldo(double saldo){
    if(saldo > 0)
        this->saldo = saldo;
    else
        this->saldo = 0;
}

void Conta::setNumeroConta(int numeroConta){
    if(numeroConta > 0)
        this->numeroConta = numeroConta;
    else
        this->numeroConta = 0;
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}

double Conta::getSaldo(){
    return saldo;
}

int Conta::getNumeroConta(){
    return numeroConta;
}

void Conta::Sacar(double valor){
    if(valor <= saldo){
        saldo -= valor;
    }else{
        cout << "Saldo insuficiente!" << endl;
    }
    //exception
}

void Conta::Depositar(double valor){
    if(valor > 0){
        saldo += valor;
    }
    //exception
}