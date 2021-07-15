#include "CPF.hpp"
#include <iostream>
#include <regex>
#include <string>

CPF::CPF(std::string numero)
	:numero(numero)
{
    validaCPF();
}

std::string CPF::recuperaNumero() 
{
	return numero;
}

void CPF::validaCPF() {
    std::regex integer_expr("([0-9]{2}[\.]?[0-9]{3}[\.]?[0-9]{3}[\/]?[0-9]{4}[-]?[0-9]{2})|([0-9]{3}[\.]?[0-9]{3}[\.]?[0-9]{3}[-]?[0-9]{2})");
    if (!std::regex_match(numero, integer_expr))
        std::cout << "CPF INVALIDO" << std::endl;
}