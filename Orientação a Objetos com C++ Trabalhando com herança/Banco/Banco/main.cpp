#include <iostream>
#include <string>
#include "Conta.hpp"
#include "CPF.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	Conta umaContaDesnecessaria("123456", Titular("Douglas", string("123.456.789-10")));
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

int main()
{
	Conta umaConta("123456", Titular("Douglas", CPF("123")));
	umaConta.depositar(1000);
	ExibeSaldo(umaConta);

	Conta umaOutraConta("123456", Titular("Tadeu", CPF("123.456.789-10")));

	Conta maisUmaConta("123456", Titular("Tadeu", CPF("123.456.789-10")));
	umaOutraConta.depositar(500);
	umaOutraConta.sacar(200);

	ExibeSaldo(umaOutraConta);

	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	Funcionario funcionario(CPF("123.456.789-10"), "Douglas", 500);

	return 0;
}
