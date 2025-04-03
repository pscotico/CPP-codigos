#include <iostream>
using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
};

void exibir(const Pessoa& pessoa) {
    cout << "Nome: " << pessoa.nome << endl;
    cout << "Idade: " << pessoa.idade << endl;
}

int main() {
    Pessoa pessoa1;

    cout << "Digite o seu nome: ";
    cin >> pessoa1.nome;

    cout << "Digite a sua idade: ";
    cin >> pessoa1.idade;

    exibir(pessoa1);

    if (pessoa1.idade >= 18) {
        cout << "Você é maior de idade." << endl;
    } else {
        cout << "Você é menor de idade." << endl;
    }

    return 0;
}

	 
