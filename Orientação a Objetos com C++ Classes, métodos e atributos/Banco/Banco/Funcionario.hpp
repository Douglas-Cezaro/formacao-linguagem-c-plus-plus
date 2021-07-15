#pragma once
#include "CPF.hpp"
#include <string>

class Funcionario
{
private:
	CPF cpf;
	std::string nome;
	float salario;
public:
	Funcionario(const CPF& cpf, std::string nome, float salario);
};