#pragma once
#include <string>
#include "CPF.hpp"

namespace Pessoa
{
	class Pessoa
	{
	protected:
		CPF cpf;
		std::string nome;

	public:
		Pessoa(CPF cpf, std::string nome);

	private:
		void verificaTamanhoDoNome();
	};
}