#include <iostream>
using namespace std;

class Funcionario {
public:
    string nome;
    float salario;
    string cargo;

    void Aumentarsalario(float aumento) {
        salario += aumento;
        cout << "Seu novo sal�rio �: " << salario << endl;
    }

    void exibirinformacoes() {
        cout << "Seu nome �: " << nome << endl;
        cout << "Seu sal�rio �: " << salario << endl;
        cout << "Seu cargo �: " << cargo << endl;
    }
};

int main() {
    Funcionario func;

    cout << "Digite seu nome: " << endl;
    cin >> func.nome;

    cout << "Digite seu sal�rio: " << endl;
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

