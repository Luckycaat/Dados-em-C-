#include <iostream>
using namespace std;
int main(){
    int m[10][10], m2[10][10], cont=1;
    
    //Preenchendo a matriz 1
    for(int col = 0; col < 10; col++){
            for(int lin = 0; lin < 10; lin++){
                    m[col][lin] = cont;
                    cont++;               
                    }
            }
    
    //Preenchendo a matriz 2
    for(int col = 0; col < 10; col++){
            for(int lin = 0; lin < 10; lin++){
                    if(lin==col){
                                m2[col][lin]=1;
                                }
                    else{
                         m2[col][lin]=0;
                         }             
                    }
            }
    
    //Mostrando os resultados m1
    cout<<"Resultado da Matriz 1:\n\n";
    for(int col = 0; col < 10; col++){
            for(int lin = 0; lin < 10; lin++){
                    cout<<"| "<<m[col][lin]<<" |  ";               
                    }
            cout<<"\n";
            } 

    //Mostrando os resultados m2
    cout<<"Resultado da Matriz 2:\n\n";
    for(int col = 0; col < 10; col++){
            for(int lin = 0; lin < 10; lin++){
                    cout<<"| "<<m2[col][lin]<<" | ";               
                    }
            cout<<"\n";
            }
    
    cout<<"\n\n";	
    system("pause");
    return(0);
}
