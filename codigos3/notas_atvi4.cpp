#include <iostream>
using namespace std;

class Aluno {
public:
    string nome;
    double nota1, nota2, nota3;

    bool alunoAprovado() {
        double media = (nota1 + nota2 + nota3) / 3;
        return media >= 7.0;
    }

    void exibirResultado() {
        double media = (nota1 + nota2 + nota3) / 3;
        cout << "Aluno: " << nome << endl;
        cout << "Média: " << media << endl;
        if (alunoAprovado()) {
            cout << "Status: Aprovado!" << endl;
        } else {
            cout << "Status: Reprovado!" << endl;
        }
    }
};

int main() {
    Aluno aluno;

    cout << "Digite o nome do aluno: ";
    cin >> aluno.nome;

    cout << "Digite a primeira nota: ";
    cin >> aluno.nota1;

    cout << "Digite a segunda nota: ";
    cin >> aluno.nota2;

    cout << "Digite a terceira nota: ";
    cin >> aluno.nota3;

    aluno.exibirResultado();

    return 0;
}


