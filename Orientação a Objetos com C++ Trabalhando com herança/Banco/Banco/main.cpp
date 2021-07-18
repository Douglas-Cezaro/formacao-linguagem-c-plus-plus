#include <iostream>
#include <string>
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "CPF.hpp"
#include "Funcionario.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	ContaCorrente umaContaDesnecessaria("123456", Titular("Douglas", string("123.456.789-10")));
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta) {
	conta.sacar(200);
}

int main()
{
	ContaPoupanca umaConta("123456", Titular("Douglas", CPF("123.456.789-10")));
	umaConta.depositar(1000);
	RealizaSaque(umaConta);
	ExibeSaldo(umaConta);

	ContaCorrente umaOutraConta("123456", Titular("Tadeu", CPF("123.456.789-10")));

	ContaCorrente maisUmaConta("123456", Titular("Tadeu", CPF("123.456.789-10")));
	umaOutraConta.depositar(500);
	RealizaSaque(umaOutraConta);

	ExibeSaldo(umaOutraConta);

	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	Funcionario funcionario(CPF("123.456.789-10"), "Douglas", 500);

	cout << "Nome do funcionario: " << funcionario.recuperaNome() << endl;

	return 0;
}
