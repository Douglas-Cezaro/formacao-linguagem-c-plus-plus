#include "Avaliador.hpp"
#include <iostream>

int main() {

	Lance primeiroLance(Usuario("Douglas"), 1000);
	Lance segundoLance(Usuario("Ana Maria"), 2000);
	Leilao leilao("Fiat 147 0Km");
	leilao.recebeLance(segundoLance);
	leilao.recebeLance(primeiroLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);

	std::cout << leiloeiro.recuperarMaiorValor() << std::endl;

	return 0;
}