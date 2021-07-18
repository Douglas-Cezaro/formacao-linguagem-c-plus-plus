#include <iostream>
#include <string>
#include "ContaPoupanca.hpp"
#include "ContaCorrente.hpp"
#include "CPF.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta) {
	ContaCorrente umaContaDesnecessaria("123456", Titular("Douglas", string("123.456.789-10"), "umaSenha"));
	cout << "O saldo da conta e: " << conta.recuperaSaldo() << endl;
}

void RealizaSaque(Conta& conta) {
	conta.sacar(200);
}

void FazLogin(Autenticavel& alguem, string senha) {
	if (alguem.autentica(senha)) {
		cout << "Login Realizado com sucesso" << endl;
	}
	else {
		cout << "Senha invalida!" << endl;
	}
}

int main()
{
	ContaPoupanca umaConta("123456", Titular("Douglas", CPF("123.456.789-10"), "umaSenha"));
	umaConta.depositar(500);
	RealizaSaque(umaConta);

	ContaCorrente umaOutraConta("123456", Titular("Tadeu", CPF("123.456.789-10"), "umaSenha"));
	umaOutraConta.depositar(1000);
	umaOutraConta.transferePara(umaConta, 250);

	ContaCorrente maisUmaConta("123456", Titular("Tadeu", CPF("123.456.789-10"), "umaSenha"));
	umaOutraConta.transferePara(maisUmaConta, 250);

	ExibeSaldo(umaOutraConta);
	ExibeSaldo(umaConta);
	ExibeSaldo(maisUmaConta);

	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	Gerente gerente(CPF("123.456.789-10"), "Douglas", 500, "umaSenha", DiaDaSemana::Terca);
	
	FazLogin(gerente, "umaSenha");

	return 0;
}
