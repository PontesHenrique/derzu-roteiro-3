#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;
int main(){
	
	double salario, saldo, taxa, valor;
	int numeroConta, variacao;
	string nome;
	
	cout << "Digite um Nome: ";
    getline(cin, nome);
    cout << "Digite o salario: ";
    cin >> salario;
    cout << "Digite o saldo: ";
    cin >> saldo;
    cout << "Digite o numero da conta: ";
    cin >> numeroConta;
    cout << "Digite o taxa da poupança: ";
    cin >> taxa;
    cout << "Digite a variação da poupança: ";
    cin >> variacao;

    /*ContaCorrente *cc = new ContaCorrente(salario, nome, saldo, numeroConta);
    Poupanca *p = new Poupanca(5, 1, "Victor Poupanca", 200, 223069);
    ContaEspecial *ce = new ContaEspecial(5000, "Victor", 200, 223069);*/
    
    ContaCorrente *cc = new ContaCorrente(salario, nome, saldo, numeroConta);
    Poupanca *p = new Poupanca(taxa, variacao, nome, saldo, numeroConta);
    ContaEspecial *ce = new ContaEspecial(salario, nome, saldo, numeroConta);

    cout << "Digite valor para deposito em conta corrente: ";
    cin >> valor;
    cc->Depositar(valor);
	
	cout << "Digite valor npara deposito em poupança: ";
    cin >> valor;
    p->Depositar(valor);
    
    cout << "Digite valor npara deposito em conta especial: ";
    cin >> valor;
    ce->Depositar(valor);

    cout << cc->toString();
    cout << p->toString();
    cout << ce->toString();

    p->setVariacao(51);
    p->setSaldo(3000);
    cout << p->toString() << endl;
    p->Sacar(5000);

    return 0;
}
