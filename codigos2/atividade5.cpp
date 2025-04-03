#include <iostream>
using namespace std;

class Produto {
public:
    string nome;
    float preco;
    int estoque;

    Produto(string nomeProduto, float precoProduto, int estoqueProduto) {
        nome = nomeProduto;
        preco = precoProduto;
        estoque = estoqueProduto;
    }

    float venderProduto(int quantidade) {
        if (quantidade <= estoque) {
            estoque -= quantidade;
            return preco * quantidade;
        } else {
            cout << "Estoque insuficiente!" << endl;
            return 0;
        }
    }

    void reporEstoque(int quantidade) {
        estoque += quantidade;
    }
};

int main() {
    Produto p1("Produto A", 10.0, 50);
    Produto p2("Produto B", 20.0, 30);

    int quantidadeVenda;

    cout << "Venda do Produto A:" << endl;
    cout << "Digite a quantidade a ser vendida: ";
    cin >> quantidadeVenda;
    float totalVendaA = p1.venderProduto(quantidadeVenda);
    if (totalVendaA > 0) {
        cout << "Valor total da venda: R$ " << totalVendaA << endl;
    }

    cout << "\nVenda do Produto B:" << endl;
   

