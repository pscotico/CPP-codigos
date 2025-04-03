#include <iostream>
using namespace std;

class Contabancaria {
  public:
	int saldo;
	int deposito;
	int saque;
	int numerodaconta;
}; 

void saldo(Contabancaria conta) {
 	cout<<"digite o valor do seu saldo" << endl;
 	cin>> conta.saldo; 
}
 
void deposito(Contabancaria conta) {
 	cout<<"digite o valor do seu deposito" << endl;
 	cin>> conta.deposito; 
 	cout<<"o valor da sua conta " << conta.deposito + conta.saldo << endl; 
}
 
void saque(Contabancaria conta) {
 	cout<<"digite o valor do seu saque: " << endl;
 	cin>> conta.saque; 
 	if(conta.saldo > 0) { 
 	  	cout<<"o valor da sua conta " << conta.saldo - conta.saque << endl; 
	} else {
	   	cout<<"vc nao tem saldo suficiente" << endl;
	   	return; 
	}
}

int main() {
 	int marcar;
 	Contabancaria contabancaria1; 

 	cout<< "digite o saldo da sua conta"<< endl;
 	cin>> contabancaria1.saldo; 

 	cout<< "digite o numero da conta"<< endl;
 	cin>> contabancaria1.numerodaconta; 

 	cout<< "1 depositar 2 sacar 3 exibir"<<endl; 
 	cin>> marcar;

 	if (marcar == 1){
 		deposito(contabancaria1);
	} 
	else if(marcar == 2){
	 	saque(contabancaria1); 
	} 
	else if(marcar == 3){ 
	 	saque(contabancaria1);
	} 
	else {
	 	cout<< "esta opcao nao existe"<< endl; 
	}
	return 0;
}

