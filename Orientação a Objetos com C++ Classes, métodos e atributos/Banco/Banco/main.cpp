#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo (const Conta& conta) {
	Conta umaContaDesnecessaria("123456", Titular("Douglas", "123.456.789-10"));
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

int main()
{
	Conta umaConta("123456", Titular("Douglas", "123.456.789-10"));
	umaConta.depositar(1000);
	ExibeSaldo(umaConta);

	Conta umaOutraConta("123456", Titular("Tadeu", "123.456.789-10"));

	Conta maisUmaConta("123456", Titular("Tadeu", "123.456.789-10"));
	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);


	cout << "Nome Titular: " << umaConta.recuperaTitular().recuperaNomeTitular() << endl;
	ExibeSaldo(umaOutraConta);
	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	return 0;
}
