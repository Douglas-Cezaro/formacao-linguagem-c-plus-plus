#include "Caixa.hpp"

using namespace Funcionario;

Caixa::Caixa(CPF cpf, std::string nome, float salario):
	Funcionario(cpf, nome, salario)
{}

float Caixa::bonificacao() const {
	return recuperaSalario() * 0.10;
};