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

    std::cout << "�rea do quadrado: " << area(lado) << std::endl;
    std::cout << "�rea do ret�ngulo: " << area(base, altura) << std::endl;

    return 0;
}

