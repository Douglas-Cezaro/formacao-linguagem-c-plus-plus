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
		std::string recuperaNome () const;

	private:
		void verificaTamanhoDoNome();
	};
}