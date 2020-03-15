#include "SistemaGerenciaFolha.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(){   
    orcamentoMax = 0;
}

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamentoMax){   
    setOrcamentoMax(orcamentoMax);
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *func){
    funcionarios[i] = func;
    i++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double
        valorTotal = 0;

    for (int i = 0; i < MAX_FUNCIONARIOS; i++){
        valorTotal += funcionarios[i]->CalcularSalario();
    }
    
    if(valorTotal > orcamentoMax){
        throw OrcamentoEstouradoException();
    }else{
        return valorTotal;
    }

}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula){
    
    for (int i = 0; i < MAX_FUNCIONARIOS; i++){
        if(funcionarios[i]->getMatricula() == matricula){
            return funcionarios[i]->CalcularSalario();
        }
    }

    throw FuncionarioNaoExisteException();
    return -1;
}

double SistemaGerenciaFolha::getOrcamentoMax(){
    return orcamentoMax;
}

void SistemaGerenciaFolha::setOrcamentoMax(double orcamentoMax){
    if(orcamentoMax < 0)
        this->orcamentoMax = 0;
    else
        this->orcamentoMax = orcamentoMax;
}