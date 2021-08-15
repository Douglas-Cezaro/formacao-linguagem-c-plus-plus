#include "Avaliador.hpp"
#include <iostream>

int main() {
	
	// Arrange - Given
	Lance primeiroLance(Usuario("Douglas"), 1000);
	Lance segundoLance(Usuario("Ana Maria"), 2000);
	Leilao leilao("Fiat 147 0Km");
	leilao.recebeLance(segundoLance);
	leilao.recebeLance(primeiroLance);

	Avaliador leiloeiro;

	// Act - When
	leiloeiro.avalia(leilao);

	// Assert - Then
	float valorEsperado = 2000;
		
	if (valorEsperado == leiloeiro.recuperarMaiorValor()) {
		std::cout << "TESTE OK" << std::endl;
	}
	else {
		std::cout << "TESTE FALHOU" << std::endl;
	}

	return 0;
}