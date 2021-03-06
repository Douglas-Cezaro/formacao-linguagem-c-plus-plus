#ifndef Avaliador_hpp
#define Avaliador_hpp
#include "Leilao.hpp"

class Avaliador
{

private:
	float maiorValor;

public:
	void avalia(Leilao);
	float recuperarMaiorValor() const;
};

#endif