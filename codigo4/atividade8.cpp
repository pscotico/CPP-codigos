#include <iostream>

using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << (idade >= 18 ? "Você pode votar." : "Você não pode votar.") << endl;

    return 0;
}

