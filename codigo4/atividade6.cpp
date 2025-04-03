#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um número: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Par" : "Ímpar") << endl;

    return 0;
}

