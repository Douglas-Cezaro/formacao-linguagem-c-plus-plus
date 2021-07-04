#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

//Constructor, Lista de inicialização
Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular):
	numeroConta(numero), 
	nomeTitular(nomeTitular), 
	cpfTitular(cpfTitular), 
	saldo(0)
{
	verificaTamanhoDoNome();
	numeroDeContas++;
}

Conta::~Conta() {
	numeroDeContas--;
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

int Conta::recuperaNumeroDeContas() {
	return numeroDeContas;
}

void Conta::verificaTamanhoDoNome() {
	if (nomeTitular.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}