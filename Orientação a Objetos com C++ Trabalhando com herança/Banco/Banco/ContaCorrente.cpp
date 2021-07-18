#include <iostream>
#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular):
	Conta(numero, titular)
{}

float ContaCorrente::taxaDeSaque() const {
	std::cout << "Method ContaCorrente::taxaDeSaque" << std::endl;
	return 0.05;
}