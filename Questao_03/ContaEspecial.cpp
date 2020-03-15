#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial()
: ContaCorrente(){
    
}

ContaEspecial::~ContaEspecial(){
    
}

ContaEspecial::ContaEspecial(double salario, std::string nomeCliente, double saldo, int numeroConta)
: ContaCorrente(salario, nomeCliente, saldo, numeroConta){

}

double ContaEspecial::definirLimite(){
    limite = 4*salario;
    return limite;
}

string ContaEspecial::toString(){
    stringstream resumo;

    resumo << "\n\nConta Especial\n"
        << "Nome: " << nomeCliente << endl
        << "Numero da Conta: " << numeroConta << endl
        << "Saldo: " << saldo << " R$" << endl
        << "Salario: " << salario << " R$" << endl
        << "Limite disponivel: " << definirLimite() << endl;
    
    return resumo.str();
}
