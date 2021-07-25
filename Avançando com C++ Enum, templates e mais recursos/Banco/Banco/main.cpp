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
	auto resultado = conta.sacar(200);

	//Pode ser feito assim também, aqui retorna um ponteiro, senão tiver retorna null
	//auto saldo = std::get_if<float>(&resultado);

	if (resultado.index() == 1) {
		cout << "Novo saldo da conta " << std::get<float>(resultado) << endl;
	}

}

void FazLogin(Autenticavel& alguem, string senha) {
	if (alguem.autentica(senha)) {
		cout << "Login Realizado com sucesso" << endl;
	}
	else {
		cout << "Senha invalida!" << endl;
	}
}

ostream& operator<<(ostream& cout, const Conta& conta) {
	Titular titular = conta.titular;
	cout << "O saldo da conta e (Operador): " << conta.recuperaSaldo() << endl;
	cout << "O Titular da conta e: " << titular.recuperaNome() << endl;
	return cout;
}

template<typename MeuTipo>
MeuTipo Menor(MeuTipo a, MeuTipo b) {
	return a < b ? a : b;
}

int main()
{
	ContaPoupanca umaConta("123456", Titular("Douglas", CPF("123.456.789-10"), "umaSenha"));
	umaConta.depositar(500);
	RealizaSaque(umaConta);

	ContaCorrente umaOutraConta("123456", Titular("Tadeu", CPF("123.456.789-10"), "umaSenha"));
	umaOutraConta.depositar(1000);
	(Conta&)umaOutraConta += 300;

	umaConta < umaOutraConta;

	cout << umaConta;

	ContaCorrente maisUmaConta("123456", Titular("Tadeu", CPF("123.456.789-10"), "umaSenha"));
	umaOutraConta.transferePara(maisUmaConta, 250);

	umaOutraConta += maisUmaConta;
	
	cout << "Menor: " << Menor<Conta&>(umaConta, umaOutraConta);

	int a = 1, b = 2;
	cout << "INT MENOR: " << Menor(a, b) << endl;

	float c = 1.5, d = 2.5;
	cout << "FLOAT MENOR: " << Menor(c, d) << endl;

	cout << "Numero de contas: " << Conta::recuperaNumeroDeContas() << endl;

	Gerente gerente(CPF("123.456.789-10"), "Douglas", 500, "umaSenha", DiaDaSemana::Terca);

	FazLogin(gerente, "umaSenha");

	RealizaSaque(umaConta);

	return 0;
}