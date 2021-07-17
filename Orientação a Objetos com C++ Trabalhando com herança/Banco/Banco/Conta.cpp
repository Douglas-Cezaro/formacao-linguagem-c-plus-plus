#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

//Constructor, Lista de inicialização
Conta::Conta(std::string numero, Titular titular, short int tipoConta) :
	numeroConta(numero),
	titular(titular),
	saldo(0),
	tipoConta(tipoConta)
{
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

	float taxa = tipoConta == 1 ? 0.05 : 0.03;
	
	float tarifadeSaque = valorASacar * taxa;

	float valorDoSaque = valorASacar + tarifadeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorDoSaque;
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

Titular Conta::recuperaTitular() {
	return titular;
}

int Conta::recuperaNumeroDeContas() {
	return numeroDeContas;
}
