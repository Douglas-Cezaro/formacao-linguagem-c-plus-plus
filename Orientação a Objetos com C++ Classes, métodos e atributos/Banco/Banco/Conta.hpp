#pragma once
#include <string>

class Conta
{
private:
	static int numeroDeContas;

public:
	static int recuperaNumeroDeContas();

private:
	std::string numeroConta;
	std::string nomeTitular;
	std::string cpfTitular;
	float saldo;

public:
	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);
	~Conta();
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumeroConta();
	std::string recuperaCpfTitular();
	std::string recuperaNomeTitular();

private:
	void verificaTamanhoDoNome();
};