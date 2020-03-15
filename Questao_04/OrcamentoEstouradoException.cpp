#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException(){
}

OrcamentoEstouradoException::~OrcamentoEstouradoException(){
}

std::string OrcamentoEstouradoException::what(){
    return erro;
}