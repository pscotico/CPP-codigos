#include <iostream>
using namespace std;

class Carro {
public:
    string modelo;
    float consumoKmPorLitro;
    float combustivel;

    Carro() {
        combustivel = 0;
    }

    void abastecer(float litros) {
        combustivel = combustivel + litros;
    }

    void mover(float distancia) {
        float consumoNecessario = distancia / consumoKmPorLitro;
        if (combustivel >= consumoNecessario) {
            combustivel = combustivel - consumoNecessario;
            cout << "O carro andou " << distancia << " km." << endl;
        } else {
            cout << "Combust�vel insuficiente para andar essa dist�ncia!" << endl;
        }
    }

    float getCombustivel() {
        return combustivel;
    }
};

int main() {
    Carro meuCarro;

    cout << "Digite o modelo do carro: ";
    cin >> meuCarro.modelo;

    cout << "Digite o consumo de km por litro do carro: ";
    cin >> meuCarro.consumoKmPorLitro;

    float litros;
    cout << "Quantos litros de combust�vel voc� quer colocar? ";
    cin >> litros;
    meuCarro.abastecer(litros);

    cout << "Combust�vel ap�s abastecer: " << meuCarro.getCombustivel() << " litros." << endl;

    float distancia;
    cout << "Qual a dist�ncia que voc� quer percorrer? ";
    cin >> distancia;
    meuCarro.mover(distancia);

    cout << "Combust�vel restante: " << meuCarro.getCombustivel() << " litros." << endl;

    return 0;
}




