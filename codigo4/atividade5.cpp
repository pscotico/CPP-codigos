#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite dois n�meros: ";
    cin >> a >> b;

    int maior = (a > b) ? a : b;

    cout << "O maior n�mero �: " << maior << endl;

    return 0;
}

