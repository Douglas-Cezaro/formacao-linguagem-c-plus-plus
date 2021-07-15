#include "Titular.hpp"
#include <iostream>


Titular::Titular(std::string nomeTitular, const CPF& cpfTitular)
	:nomeTitular(nomeTitular), cpfTitular(cpfTitular)
{
	verificaTamanhoDoNome();
}

std::string Titular::recuperaNomeTitular() {
	return nomeTitular;
}

void Titular::verificaTamanhoDoNome() {
	if (nomeTitular.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}