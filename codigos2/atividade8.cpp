#include <iostream>
using namespace std;

class ContaNetflix {
public:
    string nomeUsuario;
    string plano;

    ContaNetflix(string nome, string planoEscolhido) {
        nomeUsuario = nome;
        plano = planoEscolhido;
    }

    void alterarPlano(string novoPlano) {
        plano = novoPlano;
    }

    void exibirDetalhes() {
        cout << "Nome do usuário: " << nomeUsuario << endl;
        cout << "Plano atual: " << plano << endl;
    }
};

int main() {
    string nome, planoEscolhido, novoPlano;

    
    cout << "Digite o nome do usuário: ";
    cin >> nome;
    cout << "Escolha o plano (Básico, Padrão, Premium): ";
    cin >> planoEscolhido;

    ContaNetflix conta(nome, planoEscolhido);

    
    cout << "\nDetalhes da conta inicial:" << endl;
    conta.exibirDetalhes();


    cout << "\nDigite o novo plano (Básico, Padrão, Premium): ";
    cin >> novoPlano;
    conta.alterarPlano(novoPlano);

    
    cout << "\nDetalhes da conta após alteração:" << endl;
    conta.exibirDetalhes();

    return 0;
}

