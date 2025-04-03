#include <iostream>
using namespace std;

class Pessoa {
	public:
	string nome;
	int idade;
};

void exibir(Pessoa pessoa) {
	cout << "Nome: " << pessoa.nome << endl;
	cout << "Idade: " << pessoa.idade << endl;
}

int main() {
	Pessoa pessoa1;
	cout << "Digite o seu nome" << endl;
	cin >> pessoa1.nome;
	cout << "Voce se chama: " << pessoa1.nome << endl;
	exibir(pessoa1);

	cout << "Digite a sua idade" << endl;
	cin >> pessoa1.idade;
	cout << "Sua idade e: " << pessoa1.idade << endl;
	exibir(pessoa1);

	if (pessoa1.idade >= 18) {
		cout << "Voce e maior de idade" << endl;
	} else {
		cout << "Voce e menor de idade" << endl;
	}
	
	return 0;
}

