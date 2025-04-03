#include <iostream>

int area(int lado) {
    return lado * lado;
}

int area(int base, int altura) {
    return base * altura;
}

int main() {
    int lado = 4;
    int base = 5, altura = 8;

    std::cout << "Área do quadrado: " << area(lado) << std::endl;
    std::cout << "Área do retângulo: " << area(base, altura) << std::endl;

    return 0;
}

