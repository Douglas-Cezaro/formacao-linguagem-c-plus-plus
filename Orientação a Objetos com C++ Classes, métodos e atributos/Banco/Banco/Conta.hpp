#pragma once
#include <string>

class Conta
{
private:
	std::string numeroConta;
	std::string nomeTitular;
	std::string cpfTitular;
	float saldo;

public:
	// Deletar construtor padrão
	Conta() = delete;
	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumeroConta();
	std::string recuperaCpfTitular();
	std::string recuperaNomeTitular();
	void definirNomeTitular(std::string nome);
	void definirCpfTitular(std::string cpf);
	void definirNumeroConta(std::string conta);
};