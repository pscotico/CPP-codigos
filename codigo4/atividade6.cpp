#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um n�mero: ";
    cin >> num;

    cout << (num % 2 == 0 ? "Par" : "�mpar") << endl;

    return 0;
}

