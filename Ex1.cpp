#include <iostream>
#include <Windows.h>
#include <stdlib.h>
using namespace std;
int main(){
	int v = 1, n;
	
	//Exercício 1
	cout<<"Exercicio 1:\n";
	cout<<"Teste";
      
    Sleep(3000);
	system("cls");	
	
	//Exercício 2
	cout<<"Exercicio 2:\n";
	while(v <=10){
		cout<<v;
		v++;
		cout<<"\n";
	}
	
	Sleep(3000);
	system("cls");
	
	//Exercício 3
	v = 1;
	cout<<"Exercicio 3:\n";
	while(v <=1000){
		cout<<v;
		v++;
		cout<<"\n";
	}
	
	Sleep(3000);
	system("cls");
	
	//Exercício 4
	v = 1000;
	cout<<"Exercicio 4:\n";
	while(v >=1){
		cout<<v;
		v--;
		cout<<"\n";
	}
	
	Sleep(3000);
	system("cls");
	
	//Exercício 5
	cout<<"Exercicio 5:\n";
	for(n = 1; n <= 1000; n++){
		if(n % 2 == 1){
			cout<<n;
			cout<<"\n";
		}
	}
	
	Sleep(3000);
	system("cls");
	
	//Exercício 6
	cout<<"Exercicio 6:\n";
	for(n = 1; n <= 1000; n++){
		if(n % 2 == 0){
			cout<<n;
			cout<<"\n";
		}
	}
	
	cout<<"\n\n";	
    system("pause");
    return(0);
}
