#include <iostream>
#include <string>
using namespace std;

class Retangulo {
public:
    int largura;
    int altura;

    Retangulo(int largura, int altura) {
        this->largura = largura;
        this->altura = altura;
    }

    int calcularArea() {
        return largura * altura;
    }

    void exibir() {
        cout << "Largura: " << largura << ", Altura: " << altura << ", �rea: " << calcularArea() << endl;
    }
};

int main() {
    Retangulo retangulo1(2, 2);
    retangulo1.exibir();

    return 0;
}

