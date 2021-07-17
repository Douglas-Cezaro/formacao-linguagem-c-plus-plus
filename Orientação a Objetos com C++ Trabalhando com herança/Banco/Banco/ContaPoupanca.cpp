#include <iostream>
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):
	Conta(numero, titular)
{}

void ContaPoupanca::sacar(float valorASacar) {
	if (valorASacar <= 0) {
		std::cout << "Nao pode sacar valor zero ou menor que zero" << std::endl;
		return;
	}

	float tarifadeSaque = valorASacar * 0.03;

	float valorDoSaque = valorASacar + tarifadeSaque;

	if (valorDoSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorDoSaque;
}