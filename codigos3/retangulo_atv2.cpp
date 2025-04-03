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

    cout << "A sua �rea �: " << area << endl;
    cout << "O seu per�metro �: " << perimetro << endl;

    if (retangulo.altura == retangulo.largura) {
        cout << "O ret�ngulo � um quadrado!" << endl;
    } else {
        cout << "O ret�ngulo n�o � um quadrado." << endl;
    }
}

int main() {
    Retangulo retangulo1;

    cout << "Digite a altura: ";
    cin >> retangulo1.altura;

    cout << "Digite a largura: ";
    cin >> retangulo1.largura;

    cout << "Sua altura �: " << retangulo1.altura << endl;
    cout << "Sua largura �: " << retangulo1.largura << endl;

    exibir(retangulo1);

    return 0;
}

