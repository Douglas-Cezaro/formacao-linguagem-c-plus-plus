#include <iostream>
#include <string>

using namespace std;

struct Conta
{
	string numeroConta;
	string cpfTitular;
	string nomeTitular;
	float saldo;

	void sacar(float valorSaque)
	{
		if (valorSaque <= 0) {
			cout << "Nao pode sacar valor zero ou menor que zero" << endl;
			return;
		}

		if (valorSaque > saldo) {
			cout << "Saldo insuficiente" << endl;
			return;
		}
		saldo -= valorSaque;
	}

	void depositar(float valorDeposito) {
		if (valorDeposito <= 0) {
			cout << "Nao pode depositar o valor zero ou negativo" << endl;
			return;
		}

		saldo += valorDeposito;
	}
};



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
