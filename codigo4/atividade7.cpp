#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um número: ";
    cin >> num;

    string resultado = (num > 0) ? "Positivo" : (num < 0) ? "Negativo" : "Zero";

    cout << "O número é: " << resultado << endl;

    return 0;
}

