#include <iostream>
using namespace std;

class ContaBancaria {
public:
    int numeroConta;
    double saldo;

    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
            cout << "Depósito de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Valor inválido para depósito." << endl;
        }
    }

    void sacar(double valor) {
        if (valor > 0 && saldo >= valor) {
            saldo -= valor;
            cout << "Saque de R$" << valor << " realizado com sucesso." << endl;
        } else {
            cout << "Saque não permitido. Saldo insuficiente." << endl;
        }
    }

    void exibirSaldo() {
        cout << "Número da conta: " << numeroConta << endl;
        cout << "Saldo atual: R$" << saldo << endl;
    }
};

int main() {
    ContaBancaria conta;

    cout << "Digite o número da conta: ";
    cin >> conta.numeroConta;

    conta.saldo = 0;

    int opcao;
    double valor;

    do {
        cout << "\nMenu:\n1 - Depositar\n2 - Sacar\n3 - Exibir saldo\n0 - Sair\nEscolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o valor do depósito: ";
                cin >> valor;
                conta.depositar(valor);
                break;
            case 2:
                cout << "Digite o valor do saque: ";
                cin >> valor;
                conta.sacar(valor);
                break;
            case 3:
                conta.exibirSaldo();
                break;
            case 0:
                cout << "Encerrando programa..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}

