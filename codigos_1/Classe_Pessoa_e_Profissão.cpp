#include <iostream>
#include <string>
using namespace std;

class Profissao {
public:
    string titulacao;
    float salario;
    int carga_horaria;

    Profissao() {}

    Profissao(string titulacao, float salario, int carga_horaria) {
        this->titulacao = titulacao;
        this->salario = salario;
        this->carga_horaria = carga_horaria;
    }
};

class Pessoa {
public:
    string nome;
    int idade;
    Profissao profissao;

    Pessoa(string nome, int idade, Profissao profissao) {
        this->nome = nome;
        this->idade = idade;
        this->profissao = profissao;
    }

    void mostrar() {
        cout << "O " << nome << " tem " << idade << " anos de idade e tem a profissao de "
             << profissao.titulacao << ", recebe " << profissao.salario 
             << " e trabalha " << profissao.carga_horaria 
             << " horas diárias. Resumindo: um vagabundo." << endl;
    }
};

int main() {
    Profissao prof("Programador", 20000, 8);
    Pessoa pessoa("Juan", 21, prof);
    pessoa.mostrar();

    return 0;
}




