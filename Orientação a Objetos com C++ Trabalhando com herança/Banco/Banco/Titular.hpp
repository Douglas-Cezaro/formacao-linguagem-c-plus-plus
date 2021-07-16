#pragma once
#include <string>
#include "CPF.hpp"
#include "Pessoa.hpp"

class Titular : public Pessoa
{
public:
	Titular(std::string nome, CPF cpf);
};
