#include <iostream>
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) :
	Conta(numero, titular)
{}

float ContaPoupanca::taxaDeSaque() const {
	std::cout << "Method ContaPoupanca::taxaDeSaque" << std::endl;
	return 0.03;
}