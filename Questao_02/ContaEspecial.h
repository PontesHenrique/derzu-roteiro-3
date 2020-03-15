#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include "Conta.h"
#include <iostream>

//classe ContaEspecial herda de Conta
class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ~ContaEspecial();

        void DefinirLimite();
};

#endif
