#include "Conta.hpp"
#include <iostream>


Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular) 
{
	this->numeroConta = numero;
	this->nomeTitular = nomeTitular;
	this->cpfTitular = cpfTitular;
	this->saldo = 0;
}

//CLASSE::METODO
void Conta::sacar(float valorASacar) {
	if (valorASacar <= 0) {
		std::cout << "Nao pode sacar valor zero ou menor que zero" << std::endl;
		return;
	}

	if (valorASacar > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar <= 0) {
		std::cout << "Nao pode depositar o valor zero ou negativo" << std::endl;
		return;
	}

	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const
{
	return saldo;
}

std::string Conta::recuperaNumeroConta() {
	return numeroConta;
}

std::string Conta::recuperaCpfTitular() {
	return cpfTitular;
}

std::string Conta::recuperaNomeTitular() {
	return nomeTitular;
}

void Conta::definirNomeTitular(std::string nome) {
	nomeTitular = nome;
}

void Conta::definirCpfTitular(std::string cpf) {
	cpfTitular = cpf;
}

void Conta::definirNumeroConta(std::string conta) {
	numeroConta = conta;
}
