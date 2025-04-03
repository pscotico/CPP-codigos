#include <iostream>
using namespace std;

int main() {
	int* ptr = new int;
	  
	*ptr = 42;
	cout << "Valor armazenado na memoria: " << *ptr << endl;
	
	delete ptr;
	return 0;
}

