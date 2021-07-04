#pragma once
#include <string>

class Titular
{
private:
	std::string nomeTitular;
	std::string cpfTitular;

public:
	Titular(std::string nomeTitular, std::string cpfTitular);
	std::string recuperaCpfTitular();
	std::string recuperaNomeTitular();
private:
	void verificaTamanhoDoNome();
};
