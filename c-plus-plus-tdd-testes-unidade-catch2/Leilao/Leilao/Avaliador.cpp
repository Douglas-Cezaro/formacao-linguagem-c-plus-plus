#include "Avaliador.hpp"

void Avaliador::avalia(Leilao leilao) {
	std::vector<Lance> lances = leilao.recuperaLances();
	Lance ultimoLance = lances.back();
	maiorValor = ultimoLance.recuperaValor();

}

float Avaliador::recuperarMaiorValor() const {
	return maiorValor;
}