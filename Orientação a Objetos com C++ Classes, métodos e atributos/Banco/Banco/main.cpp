#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
	Conta umaConta;
	umaConta.numeroConta = "123456";
	umaConta.cpfTitular = "123.456.789-10";
	umaConta.nomeTitular = "Douglas";
	umaConta.saldo = 100;

	Conta umaOutraConta;
	umaOutraConta.saldo = 200;
	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);

	cout << "Uma conta: " << umaConta.saldo << endl;
	cout << "Uma outra conta: " << umaOutraConta.saldo << endl;


	return 0;
}
