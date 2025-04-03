#include <iostream>
using namespace std;

class Calculadora {
public:
    int somar(int a, int b) {
        return a + b;
    }

    double somar(double a, double b) {
        return a + b;
    }

    int somar(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculadora calc;

    int num1, num2, num3;
    double num4, num5;

    cout << "Digite dois n�meros inteiros: ";
    cin >> num1 >> num2;
    cout << "Soma de inteiros: " << calc.somar(num1, num2) << endl;

    cout << "Digite dois n�meros decimais: ";
    cin >> num4 >> num5;
    cout << "Soma de decimais: " << calc.somar(num4, num5) << endl;

    cout << "Digite tr�s n�meros inteiros: ";
    cin >> num1 >> num2 >> num3;
    cout << "Soma de tr�s inteiros: " << calc.somar(num1, num2, num3) << endl;

    return 0;
}

