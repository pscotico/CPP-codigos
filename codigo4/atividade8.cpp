#include <iostream>

using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << (idade >= 18 ? "Voc� pode votar." : "Voc� n�o pode votar.") << endl;

    return 0;
}

