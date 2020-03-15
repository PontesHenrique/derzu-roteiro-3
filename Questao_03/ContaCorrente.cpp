#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente() 
: Conta(){
    salario = limite = 0;
}

ContaCorrente::~ContaCorrente(){
    //Destroi
}

ContaCorrente::ContaCorrente(double salario, std::string nomeCliente, double saldo, int numeroConta) 
: Conta(nomeCliente, saldo, numeroConta){
    setSalario(salario);
    definirLimite();
}

void ContaCorrente::setSalario(double salario){
    if(salario > 0)
        this->salario = salario;
    else
        this->salario = 0;
}

double ContaCorrente::getSalario(){
    return salario;
}

double ContaCorrente::getLimite(){
    return limite;
}

double ContaCorrente::definirLimite(){
    limite = 2 * salario;
    return limite;
}
string ContaCorrente::toString(){
    stringstream resumo;

    resumo << "Conta Corrente\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da Conta: " << numeroConta << endl
        << "Saldo: " << saldo << " R$" << endl
        << "Salario: " << salario << " R$" << endl
        << "Limite disponivel: " << definirLimite() << endl;
    
    return resumo.str();
}
