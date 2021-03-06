#pragma once
#include <string>
#include "CPF.hpp"
#include "Pessoa.hpp"

using namespace Pessoa;

namespace Funcionario {
	class Funcionario : public Pessoa
	{
	private:
		float salario;

	public:
		Funcionario(CPF cpf, std::string nome, float salario);
		std::string recuperaNome() const;
		virtual float bonificacao() const = 0;
		float recuperaSalario() const;
	};
}