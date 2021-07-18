#pragma once
#include <string>
#include "Autenticavel.hpp"
#include "CPF.hpp"
#include "Pessoa.hpp"

using namespace Pessoa;
class Titular : public Pessoa, Autenticavel
{
public:
	Titular(std::string nome, CPF cpf, std::string senha);
};
