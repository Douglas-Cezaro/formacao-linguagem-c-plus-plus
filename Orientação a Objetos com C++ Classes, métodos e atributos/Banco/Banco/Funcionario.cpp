#include "Funcionario.hpp"

Funcionario::Funcionario(const CPF& cpf, std::string nome, float salario) :
	nome(nome), cpf(cpf), salario(salario)
{}