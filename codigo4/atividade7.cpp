#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um n�mero: ";
    cin >> num;

    string resultado = (num > 0) ? "Positivo" : (num < 0) ? "Negativo" : "Zero";

    cout << "O n�mero �: " << resultado << endl;

    return 0;
}

