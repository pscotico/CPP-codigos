#include <iostream>
#include <string>
using namespace std;

class Pessoa {
	private:
		string nome;
		int idade;
		float salario;

	public:
		Pessoa(string nome, int idade, float salario) {
			this->nome = nome;
			this->idade = idade;
			this->salario = salario;
		}

		string getNome() {
			return nome;
		}
		void setNome(string n) {
			nome = n;
		}

		int getIdade() {
			return idade;
		}
		void setIdade(int i) {
			idade = i;
		}

		float getSalario() {
			return salario;
		}
		void setSalario(float s) {
			salario = s;
		}

		void exibirPessoa() {
			cout << "Seu nome e: " << nome << endl;
			cout << "Sua idade e: " << idade << endl;
			cout << "Seu salario e: " << salario << endl;
		}
};

// Conta bancária
class ContaBancaria {
	private:
		int numero;
		float saldo;
		Pessoa titular;

	public:
		ContaBancaria(int numero, float saldo, Pessoa titular) : titular(titular) {
			this->numero = numero;
			this->saldo = saldo;
		}

		int getNumero() {
			return numero;
		}
		void setNumero(int n) {
			numero = n;
		}

		float getSaldo() {
			return saldo;
		}
		void setSaldo(float i) {
			saldo = i;
		}

		Pessoa getTitular() {
			return titular;
		}
		void setTitular(Pessoa p) {
			titular = p;
		}

		void depositar(float valor) {
			if (titular.getSalario() >= valor







