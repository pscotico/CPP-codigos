#include <iostream>
#include <string>
using namespace std;

class Produto {
	public:
	string produto;
	float preco;
	float quantidade;
	
	// Construtor
	Produto(string produto, float preco, float quantidade) {
		this->produto = produto;
		this->preco = preco;
		this->quantidade = quantidade;
	}
	
	void calculo() {
		cout << "O valor total do estoque: " << preco * quantidade << endl;
	}
};

int main() {
	Produto produto1("coca", 2, 2);
	produto1.calculo();
	return 0;
}

