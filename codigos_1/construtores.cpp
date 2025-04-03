#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    string nome;
    int idade;

    Pessoa(string nome, int idade) {  
        this->nome = nome;
        this->idade = idade;
    }

    void exibirinfo() {
        cout << "Nome: " << nome << " Idade: " << idade << endl;  
    }
};

int main() {
    Pessoa pessoa1("João", 25);
    
    pessoa1.exibirinfo();

    return 0;
}

