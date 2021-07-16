#include <iostream>
#include "Pessoa.hpp"

Pessoa::Pessoa(CPF cpf, std::string nome):
	_cpf(cpf), _nome(nome)
{
	verificaTamanhoDoNome();
}

void Pessoa::verificaTamanhoDoNome() {
	if (_nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}