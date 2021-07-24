#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

//Constructor, Lista de inicialização
Conta::Conta(std::string numero, Titular titular) :
	numeroConta(numero),
	titular(titular),
	saldo(0)
{
	numeroDeContas++;
}

Conta::~Conta() {
	numeroDeContas--;
	std::cout << "Destrutor da conta" << std::endl;
}

//CLASSE::METODO
std::pair<Conta::ResultadoSaque, float> Conta::sacar(float valorASacar) {
	if (valorASacar <= 0) {
		std::cout << "Nao pode sacar valor zero ou menor que zero" << std::endl;
		return std::make_pair(ResultadoSaque::ValorNegativo, saldo);
	}

	float tarifadeSaque = valorASacar * taxaDeSaque();

	float valorDoSaque = valorASacar + tarifadeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return std::make_pair(ResultadoSaque::SaldoInsuficiente, saldo);
	}
	saldo -= valorDoSaque;
	return std::make_pair(ResultadoSaque::Sucesso, saldo);
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar <= 0) {
		std::cout << "Nao pode depositar o valor zero ou negativo" << std::endl;
		return;
	}

	saldo += valorADepositar;
}

void Conta::operator+=(float valorADepositar) {
	depositar(valorADepositar);
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
