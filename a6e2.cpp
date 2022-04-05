#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
void listas(){
	int lista[10], lista_s[10], i, j, n=0;
    
    cout<<"Lista Inicial:  ";
    for(int cont=0; cont<10; cont++){
            lista[cont] = rand()%10;
            cout<<" - "<<lista[cont];
          }
          
    for(i=0; i<10; i++){
        for(j=0; j<n; j++){
            if(lista[i] == lista_s[j]){
                break;
                }             
            }
        if(j == n){
            lista_s[n] = lista[i];
            n++;
            }
        }
    
    cout<<"\nLista de Saida: ";
    for(int cont=0; cont<n; cont++){
            cout<<" - "<<lista_s[cont];
          }
}

float conversor_f(float temp){
	float temp_f;
	temp_f = (temp*1.8)+32;
	return(temp_f);
}

float conversor_k(float temp){
	float temp_k;
	temp_k = temp+273;
	return(temp_k);
}

float potenciar_1(float n1, float n2){
      return(pow(n1, n2));
      }
      
float potenciar_2(float n1, float n2){
	float resultado = 1;
      for(int cont=0; cont<n2; cont++){
    	resultado = resultado*n1;
		}
	return(resultado);
}

float multiplicar(float n1, float n2){
    return(n1*n2);
}
      
float somar(float n1, float n2){
    return(n1+n2);
}
      
float dividir(float n1, float n2){
    return(n1/n2);
}
      
float subtrair(float n1, float n2){
    return(n1-n2);
}

float media(float n1, float n2){
	return((n1+n2)/2);
}

int main(){
	float temp, n1, n2, a, b;
	string op;
	
	cout<<"~~~~Exercicio 1~~~~\n";
    listas();
    cout<<"\n\n";
    
    cout<<"~~~~Exercicio 2~~~~\n";
    cout<<"CONVERSOR DE TEMPERATURAS\n";
    cout<<"Digite a Temperatura em Celsius: ";
    cin>>temp;
    cout<<"\nConv. Fahrenheit: "<<conversor_f(temp);
    cout<<"\nConv. Kelvin:     "<<conversor_k(temp);
    cout<<"\n\n";
    
    cout<<"~~~~Exercicio 3~~~~\n";
    cout<<"CALCULANDO POTENCIAS\n";
    cout<<"Digite o numero:       ";
    cin>>n1;
    cout<<"Digite a sua potencia: ";
    cin>>n2;
    cout<<"\nConversao 1: "<<potenciar_1(n1,n2);
    cout<<"\nConversao 2: "<<potenciar_2(n1,n2);
    cout<<"\n\n";
    
    cout<<"~~~~Exercicio 4~~~~\n";
    cout<<"CALCULADORA\n";
    cout<<"Digite o Primeiro Numero:   ";
    cin>>a;
    cout<<"Digite o Segundo Numero:    ";
    cin>>b;
    cout<<"\nDigite a operacao: (use 'm' para media) ";
    cin>>op;
    if(op == "+"){
    	cout<<"Resultado da soma: "<<somar(a,b);
	}
    else if(op == "-"){
    	cout<<"Resultado da subtracao: "<<subtrair(a,b);
	}
	else if(op == "*"){
		cout<<"\nResultado da multiplicacao: "<<multiplicar(a,b); 
	}
	else if(op == "/"){
		cout<<"Resultado da divisao: "<<dividir(a,b);
	}
	else{
		cout<<"Resultado da media: "<<media(a,b);
	}
    
    cout<<"\n\n";	
    system("pause");
    return(0); 
    }
