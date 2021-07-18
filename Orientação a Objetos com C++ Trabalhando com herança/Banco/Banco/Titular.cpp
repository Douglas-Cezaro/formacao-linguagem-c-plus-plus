#include "Titular.hpp"
#include <iostream>

Titular::Titular(std::string nome, CPF cpf, std::string senha) :
	Pessoa(cpf, nome),
	Autenticavel(senha)
{}