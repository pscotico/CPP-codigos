#include <iostream>
using namespace std;

void soma(float* x, float* b) {
	cout << "A soma de x e b eh: " << (*x + *b) << endl;
}

int main() {
	float* x;
	float* b;
	
	cout << "Digite o valor de x" << endl;
	x = new float;
	cin >> *x;
 
	cout << "Digite o valor de b" << endl;
	b = new float;
	cin >> *b;
 
	soma(x, b);
	delete x;
	delete b;
 
	return 0;
}

