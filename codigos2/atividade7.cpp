#include <iostream>
#include <cctype> // Para a função isdigit e isupper
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

    cout << "Digite a sua senha (deve ter pelo menos 8 caracteres, uma letra maiúscula e um número): ";
    cin >> senhaUsuario;

    SenhaSegura senha(senhaUsuario);

    if (senha.validarSenha()) {
        cout << "Senha válida!" << endl;
    } else {
        cout << "Senha inválida! A senha deve ter pelo menos 8 caracteres, uma letra maiúscula e um número." << endl;
    }

    return 0;
}

