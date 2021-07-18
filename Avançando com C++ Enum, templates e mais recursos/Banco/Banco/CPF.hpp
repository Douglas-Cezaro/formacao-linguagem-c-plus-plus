#pragma once
#include <string>

class CPF
{
private:
	std::string numero;

public:
	CPF(std::string numero);
	std::string recuperaNumero();
	void validaCPF();
};

