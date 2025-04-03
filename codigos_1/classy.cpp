#include <iostream>
using namespace std;

class Pessoa {
public:
    string nome;
    int idade;
    string sexo;
    string documento;
};

void exibir(const Pessoa& pessoa) {
    cout << "Nome: " << pessoa.nome << endl;
}

int main() {
    Pessoa pessoa1;
    
    cout << "Digite o seu nome: " << endl;
    cin.ignore();
    getline(cin, pessoa1.nome);
    
    cout << "Você se chama: " << pessoa1.nome << endl;

    cout << "Digite sua idade: " << endl;
    cin >> pessoa1.idade;
    cout << "Sua idade é: " << pessoa1.idade << endl;

    cout << "Digite seu sexo: " << endl;
    cin >> pessoa1.sexo;
    cout << "Seu sexo é: " << pessoa1.sexo << endl;

    cout << "Digite seu documento: " << endl;
    cin >> pessoa1.documento;
    cout << "Seu documento é: " << pessoa1.documento << endl;

    exibir(pessoa1);

    return 0;
}

 
