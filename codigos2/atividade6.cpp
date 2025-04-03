#include <iostream>
using namespace std;

class SmartHome {
public:
    string nome;
    bool status;

    SmartHome(string nomeDispositivo) {
        nome = nomeDispositivo;
        status = false;  
    }

    void ligar() {
        status = true;
    }

    void desligar() {
        status = false;
    }

    void exibirStatus() {
        if (status) {
            cout << nome << " está ligado." << endl;
        } else {
            cout << nome << " está desligado." << endl;
        }
    }
};

int main() {
    SmartHome lampada("Lâmpada");
    SmartHome arCondicionado("Ar-Condicionado");

    int opcao;
    

    cout << "Controle da Lâmpada:" << endl;
    cout << "1. Ligar\n2. Desligar\nEscolha uma opção: ";
    cin >> opcao;
    
    if (opcao == 1) {
        lampada.ligar();
    } else if (opcao == 2) {
        lampada.desligar();
    }

    lampada.exibirStatus();

    
    cout << "\nControle do Ar-Condicionado:" << endl;
    cout << "1. Ligar\n2. Desligar\nEscolha uma opção: ";
    cin >> opcao;
    
    if (opcao == 1) {
        arCondicionado.ligar();
    } else if (opcao == 2) {
        arCondicionado.desligar();
    }

    arCondicionado.exibirStatus();

    return 0;
}

