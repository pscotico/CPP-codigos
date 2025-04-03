#include <iostream>
#include <cctype> // Para a fun��o isdigit e isupper
using namespace std;

class SenhaSegura {
public:
    string senha;

    SenhaSegura(string novaSenha) {
        senha = novaSenha;
    }

    bool validarSenha() {

        if (senha.length() < 8) {
            return false;
        }

        bool temMaiuscula = false;
        bool temNumero = false;


        for (char c : senha) {
            if (isupper(c)) {
                temMaiuscula = true;
            }
            if (isdigit(c)) {
                temNumero = true;
            }
        }

        return temMaiuscula && temNumero;
    }
};

int main() {
    string senhaUsuario;

    cout << "Digite a sua senha (deve ter pelo menos 8 caracteres, uma letra mai�scula e um n�mero): ";
    cin >> senhaUsuario;

    SenhaSegura senha(senhaUsuario);

    if (senha.validarSenha()) {
        cout << "Senha v�lida!" << endl;
    } else {
        cout << "Senha inv�lida! A senha deve ter pelo menos 8 caracteres, uma letra mai�scula e um n�mero." << endl;
    }

    return 0;
}

