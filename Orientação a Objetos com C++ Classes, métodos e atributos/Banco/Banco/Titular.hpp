#pragma once
#include <string>
#include "CPF.hpp"

class Titular
{
private:
	std::string nomeTitular;
	CPF cpfTitular;

public:
	Titular(std::string nomeTitular, CPF cpfTitular);
	std::string recuperaNomeTitular();
private:
	void verificaTamanhoDoNome();
};
