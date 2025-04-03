#include <iostream>

int soma(int a, int b) {
    return a + b;
}

float soma(float a, float b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    float a = 2.5, b = 3.7;

    std::cout << "Soma de inteiros: " << soma(x, y) << std::endl;
    std::cout << "Soma de floats: " << soma(a, b) << std::endl;

    return 0;
}

