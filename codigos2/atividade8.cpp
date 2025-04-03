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
        cout << "Nome do usu�rio: " << nomeUsuario << endl;
        cout << "Plano atual: " << plano << endl;
    }
};

int main() {
    string nome, planoEscolhido, novoPlano;

    
    cout << "Digite o nome do usu�rio: ";
    cin >> nome;
    cout << "Escolha o plano (B�sico, Padr�o, Premium): ";
    cin >> planoEscolhido;

    ContaNetflix conta(nome, planoEscolhido);

    
    cout << "\nDetalhes da conta inicial:" << endl;
    conta.exibirDetalhes();


    cout << "\nDigite o novo plano (B�sico, Padr�o, Premium): ";
    cin >> novoPlano;
    conta.alterarPlano(novoPlano);

    
    cout << "\nDetalhes da conta ap�s altera��o:" << endl;
    conta.exibirDetalhes();

    return 0;
}

