#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo (const Conta& conta) {
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

int main()
{
	Conta umaConta;
	umaConta.definirNomeTitular("Douglas");

	Conta umaOutraConta;
	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);

	ExibeSaldo(umaConta);
	cout << "Nome Titular: " << umaConta.recuperaNomeTitular() << endl;
	ExibeSaldo(umaOutraConta);


	return 0;
}
