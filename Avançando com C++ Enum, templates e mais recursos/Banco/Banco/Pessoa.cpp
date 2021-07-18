#include <iostream>
#include "Pessoa.hpp"

namespace Pessoa
{
	Pessoa::Pessoa(CPF cpf, std::string nome) :
		cpf(cpf), nome(nome)
	{
		verificaTamanhoDoNome();
	}
	std::string Pessoa::recuperaNome() const {
		return nome;
	};

	void Pessoa::verificaTamanhoDoNome() {
		if (nome.size() < 5) {
			std::cout << "Nome muito curto" << std::endl;
			exit(1);
		}
	};
}