 #include <iostream>
 using namespace std;
 
 class Retangulo {
 	public:
	int altura;
	int largura;
 };
 
 void exibir( Retangulo retangulo){
 	cout<<"a sua area e : " << retangulo.altura * retangulo.altura << endl;
 	cout<<"o seu perimetro e : " << (retangulo.altura * 2) + (retangulo.altura * 2) << endl;
 }
 
 int main(){
 	Retangulo retangulo1;
 	cout<< "digiete a altura"<< endl;
 	   cin>> retangulo1.altura;
 	cout << "sua altura e  " << retangulo1.altura;
 	
 	cout<< "digite a largura: "<< endl;
 	  cin>> retangulo1.largura;
 	  cout << "sua largura e: " << retangulo1.largura  << endl;
 	  
 	
 
 	  exibir(retangulo1);
 	
 }
