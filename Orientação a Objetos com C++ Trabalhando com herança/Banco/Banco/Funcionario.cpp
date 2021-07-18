#include "Funcionario.hpp"
#include <iostream>

namespace Funcionario {
	Funcionario::Funcionario(CPF cpf, std::string nome, float salario) :
		Pessoa(cpf, nome),
		salario(salario)
	{}

	std::string Funcionario::recuperaNome() const {
		return nome;
	}

	float Funcionario::recuperaSalario() const {
		return salario;
	};
}