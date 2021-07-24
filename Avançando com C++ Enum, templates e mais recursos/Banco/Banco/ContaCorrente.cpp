#include <iostream>
#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(std::string numero, Titular titular) :
	Conta(numero, titular)
{}

float ContaCorrente::taxaDeSaque() const {
	std::cout << "Method ContaCorrente::taxaDeSaque" << std::endl;
	return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, float valor) {
	Conta::ResultadoSaque resultado = sacar(valor).first;

	if (resultado == ResultadoSaque::Sucesso) {
		destino.depositar(valor);
	}
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem) {
	contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo() / 2);
}