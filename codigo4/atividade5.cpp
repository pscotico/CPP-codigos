#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite dois números: ";
    cin >> a >> b;

    int maior = (a > b) ? a : b;

    cout << "O maior número é: " << maior << endl;

    return 0;
}

