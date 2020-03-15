#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class OrcamentoEstouradoException : public exception{
    public:
        OrcamentoEstouradoException();
        ~OrcamentoEstouradoException();

        virtual std::string what();
    private:
        std::string erro = "Orcamento estourado!";
};

#endif