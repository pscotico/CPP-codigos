#include <iostream>
using namespace std;

class Produto {
public:
    string nome;
    float preco;

    Produto(string nomeProduto, float precoProduto) {
        nome = nomeProduto;
        preco = precoProduto;
    }

    float aplicarDesconto(float percentual) {
        float desconto = preco * (percentual / 100);
        preco -= desconto;
        return preco;
    }
};

int main() {
    string nomeProduto;
    float precoProduto, percentualDesconto;

    cout << "Digite o nome do produto: ";
    cin >> nomeProduto;

    cout << "Digite o preço do produto: ";
    cin >> precoProduto;

    Produto p(nomeProduto, precoProduto);

    cout << "Digite o percentual de desconto: ";
    cin >> percentualDesconto;

    float precoComDesconto = p.aplicarDesconto(percentualDesconto);

    cout << "Preço com desconto: " << precoComDesconto << endl;

    return 0;
}

