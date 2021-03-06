#pragma once
#include "Autenticavel.hpp"
#include "Funcionario.hpp"

using namespace Funcionario;

class Gerente final : public Funcionario, public Autenticavel
{
public:
	Gerente(CPF cpf, std::string nome, float salario, std::string senha);
	float bonificacao() const override;
};

