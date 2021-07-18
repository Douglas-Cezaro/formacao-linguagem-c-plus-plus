#include "Gerente.hpp"

Gerente::Gerente(CPF cpf, std::string nome, float salario, std::string senha, short int diaDoPagamento) :
	Funcionario(cpf, nome, salario, diaDoPagamento),
	Autenticavel(senha)
{}

float Gerente::bonificacao() const {
	return recuperaSalario() * 0.5;
};