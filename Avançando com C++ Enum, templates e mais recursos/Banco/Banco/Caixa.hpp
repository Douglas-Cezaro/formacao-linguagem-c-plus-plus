#pragma once
#include "Funcionario.hpp"

using namespace Funcionario;

class Caixa final : public Funcionario
{
public:
	Caixa(CPF cpf, std::string nome, float salario, DiaDaSemana diaDoPagamento);
	float bonificacao() const override;
};

