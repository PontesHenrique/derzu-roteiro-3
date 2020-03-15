#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include <iostream>
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

#define MAX_FUNCIONARIOS 3

class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        SistemaGerenciaFolha(double orcamentoMax);

        void setFuncionario(Funcionario *func);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(int matricula);

        double getOrcamentoMax();
        void setOrcamentoMax(double orcamentoMax);
    private:
        Funcionario *funcionarios[MAX_FUNCIONARIOS];
        double orcamentoMax;
        int i = 0;
};

#endif