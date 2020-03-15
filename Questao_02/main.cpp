#include <iostream>
#include "ContaEspecial.h"

using namespace std;

int main(){
	
	int valor;
	
    Conta *c1 = new Conta();//cria o objeto da classe Conta
    ContaEspecial *ce1 = new ContaEspecial();//objeto da classe ContaEspecial
    
    cout << "Digite um Valor para Deposito: ";//digta um valor para depositar na conta
    cin >> valor;
    c1->Depositar(valor);//chama o método para depositar
    
    cout << "Saldo disponivel da Conta Corrente: " << c1->getSaldo() << endl;
    
    cout << "\nDigite um Valor para Deposito: ";//digita um valor para depositar na poupança
    cin >> valor;
    ce1->Depositar(valor);//chama o método para depositar
    
    cout << "Saldo disponivel da Conta Especial: " << ce1->getSaldo() << endl;
    
    cout << "\nDigite um Valor para Saque: ";//digta um valor para sacar na conta
    cin >> valor;	
	c1->Sacar(valor);
	
	cout << "Saldo disponivel da Conta Corrente (apos saque): " << c1->getSaldo() << endl;
    
    cout << "\nDigite um Valor para saque: ";//digta um valor para sacar na conta especial
    cin >> valor;
    ce1->Sacar(valor);
    
    cout << "Saldo disponivel da conta especial (apos saque): " << ce1->getSaldo() << endl;
    
    cout << "\nDigite um Valor do Salario: ";//digta um valor para sacar na conta especial
    cin >> valor;

    c1->setSalarioMensal(valor);
    c1->DefinirLimite();

    ce1->setSalarioMensal(valor);
    ce1->DefinirLimite();

    cout << "\nLimite da Conta Corrente: " << c1->getLimite() << endl;
    cout << "Limite da Conta Especial: " << ce1->getLimite() << endl;

    return 0;
}
