#include <iostream>

using namespace std;

void imprimir(int num) {
    cout << "Inteiro: " << num << endl;
}

void imprimir(float num) {
    cout << "Float: " << num << endl;
}

void imprimir(string texto) {
    cout << "String: " << texto << endl;
}

int main() {
    int x = 10;
    float y = 3.14;
    string texto = "Olá, C++!";

    imprimir(x);
    imprimir(y);
    imprimir(texto);

    return 0;
}

