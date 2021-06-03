#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	Conta umaConta;
	umaConta.definirNomeTitular("Douglas");

	Conta umaOutraConta;
	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);

	cout << "Uma conta: " << umaConta.recuperaSaldo() << endl;
	cout << "Nome Titular: " << umaConta.recuperaNomeTitular() << endl;
	cout << "Uma outra conta: " << umaOutraConta.recuperaSaldo() << endl;


	return 0;
}
