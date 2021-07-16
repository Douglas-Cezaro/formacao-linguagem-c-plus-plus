#pragma once
#include <string>
#include "CPF.hpp"

class Pessoa
{
private:
	CPF _cpf;
	std::string _nome;

public:
	Pessoa(CPF cpf, std::string nome);

private:
	void verificaTamanhoDoNome();
};

