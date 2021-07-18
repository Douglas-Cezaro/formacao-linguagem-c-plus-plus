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
		// 0 = Domingo, 1 = Segunda, etc
		short int diaDoPagamento;

	public:
		Funcionario(CPF cpf, std::string nome, float salario, short int diaDoPagamento);
		std::string recuperaNome() const;
		virtual float bonificacao() const = 0;
		float recuperaSalario() const;
	};
}