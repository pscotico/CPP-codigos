#include <iostream>
using namespace std;

class UsuarioRedeSocial {
public:
    string nome;
    string email;
    int idade;
    int seguidores;

    
    UsuarioRedeSocial(string n, string e, int i) {
        nome = n;
        email = e;
        idade = i;
        seguidores = 0;
    }

    
    void exibirPerfil() {
        cout << "Nome: " << nome << endl;
        cout << "Email: " << email << endl;
        cout << "Idade: " << idade << endl;
        cout << "Seguidores: " << seguidores << endl;
    }

    
    void seguirOutroUsuario(UsuarioRedeSocial &u) {
        u.seguidores++; 
    }
};

int main() {
    UsuarioRedeSocial usuario1("João", "joao@email.com", 25);
    UsuarioRedeSocial usuario2("Maria", "maria@email.com", 28);

    
    cout << "Perfil de João antes de seguir Maria:" << endl;
    usuario1.exibirPerfil();
    cout << endl;

    cout << "Perfil de Maria antes de ser seguida por João:" << endl;
    usuario2.exibirPerfil();
    cout << endl;
    
    usuario1.seguirOutroUsuario(usuario2);

    cout << "Perfil de João após seguir Maria:" << endl;
    usuario1.exibirPerfil();
    cout << endl;

    cout << "Perfil de Maria após ser seguida por João:" << endl;
    usuario2.exibirPerfil();
    cout << endl;

    return 0;
}

