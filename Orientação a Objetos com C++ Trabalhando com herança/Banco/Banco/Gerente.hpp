#pragma once
#include "Funcionario.hpp"

class Gerente final : public Funcionario
{
public:
	Gerente(CPF cpf, std::string nome, float salario);
	float bonificacao() const override;
};

