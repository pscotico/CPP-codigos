#include <iostream>
using namespace std;

class Carro {
	private:
		int velocidade;

	public:
		int getVelocidade() {
			return velocidade;
		}

		void setVelocidade(int v) {
			if (v >= 0 && v <= 200) {
				velocidade = v;
			} else {
				cout << "Velocidade inválida!" << endl;
			}
		}

		void exibir() {
			cout << "Velocidade do carro: " << velocidade << " km/h" << endl;
		}
};

int main() {
	Carro carro;
	carro.setVelocidade(150);
	cout << "Velocidade: " << carro.getVelocidade() << " Km/h" << endl;
	carro.exibir();

	carro.setVelocidade(250);
	carro.exibir();

	return 0;
}

