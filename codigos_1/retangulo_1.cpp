#include <iostream>
using namespace std;

class Retangulo {
	public:
	int altura;
	int largura;
};

void exibir(Retangulo retangulo) {
	cout << "A sua area e: " << retangulo.altura * retangulo.largura << endl;
	cout << "O seu perimetro e: " << (retangulo.altura * 2) + (retangulo.largura * 2) << endl;
}

int main() {
	Retangulo retangulo1;
	cout << "Digite a altura" << endl;
	cin >> retangulo1.altura;
	cout << "Sua altura e: " << retangulo1.altura << endl;

	cout << "Digite a largura" << endl;
	cin >> retangulo1.largura;
	cout << "Sua largura e: " << retangulo1.largura << endl;

	exibir(retangulo1);
}

