#include <iostream>

using namespace std;

int multiplica(int a, int b) {
    return a * b;
}

float multiplica(float a, float b) {
    return a * b;
}

int main() {
    int x = 4, y = 7;
    float a = 2.5, b = 3.2;

    cout << "Multiplica��o de inteiros: " << multiplica(x, y) << endl;
    cout << "Multiplica��o de floats: " << multiplica(a, b) << endl;

    return 0;
}

