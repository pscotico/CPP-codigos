#include <iostream>
using namespace std;

class Retangulo {
public:
    int altura;
    int largura;
};

void exibir(const Retangulo& retangulo) {
    int area = retangulo.altura * retangulo.largura;
    int perimetro = 2 * (retangulo.altura + retangulo.largura);

    cout << "A sua área é: " << area << endl;
    cout << "O seu perímetro é: " << perimetro << endl;

    if (retangulo.altura == retangulo.largura) {
        cout << "O retângulo é um quadrado!" << endl;
    } else {
        cout << "O retângulo não é um quadrado." << endl;
    }
}

int main() {
    Retangulo retangulo1;

    cout << "Digite a altura: ";
    cin >> retangulo1.altura;

    cout << "Digite a largura: ";
    cin >> retangulo1.largura;

    cout << "Sua altura é: " << retangulo1.altura << endl;
    cout << "Sua largura é: " << retangulo1.largura << endl;

    exibir(retangulo1);

    return 0;
}

