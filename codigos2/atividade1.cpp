#include <iostream>
using namespace std;

class Funcionario {
public:
    string nome;
    float salario;
    string cargo;

    void Aumentarsalario(float aumento) {
        salario += aumento;
        cout << "Seu novo salário é: " << salario << endl;
    }

    void exibirinformacoes() {
        cout << "Seu nome é: " << nome << endl;
        cout << "Seu salário é: " << salario << endl;
        cout << "Seu cargo é: " << cargo << endl;
    }
};

int main() {
    Funcionario func;

    cout << "Digite seu nome: " << endl;
    cin >> func.nome;

    cout << "Digite seu salário: " << endl;
    cin >> func.salario;

    cout << "Digite seu cargo: " << endl;
    cin >> func.cargo;

    float aumento;
    cout << "Digite o aumento salarial: ";
    cin >> aumento;
    func.Aumentarsalario(aumento);

    func.exibirinformacoes();

    return 0;
}

