#include <iostream>
using namespace std;
int main(){
	float v1[50], v2[50], v3[50];
	
	//Exercicio 1
	cout<<"~  Exercicio 1  ~\n";
	for(int cont = 0; cont < 50; cont++){
		v1[cont]=0;
		cout<<"Posicao "<<cont<<": "<<v1[cont]<<"\n";
	}
	
	cout<<"\n";
	
	//Exercicio 2
	cout<<"~  Exercicio 2  ~\n";
	for(int cont = 0; cont < 50; cont++){
		v2[cont]=cont+1;
		cout<<"Posicao "<<cont<<": "<<v2[cont]<<"\n";
	}
	
	cout<<"\n";
	
	//Exercicio 3
	cout<<"~  Exercicio 3  ~\n";
	for(int cont = 1; cont < 50; cont++){
		v3[cont]=cont*cont;
		cout<<"Posicao "<<cont<<": "<<v3[cont]<<"\n";
	}
	
	cout<<"\n\n";	
    system("pause");
    return(0);
}
