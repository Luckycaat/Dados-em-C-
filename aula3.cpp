#include <iostream>
using namespace std;
int main(){
    int m[5][5];
    //Preenchendo a matriz
    for(int col = 0; col < 5; col++){
            for(int lin = 0; lin < 5; lin++){
                    m[col][lin] = 0;               
                    }
            }
            
    //Mostrando os resultados
    for(int col = 0; col < 5; col++){
            for(int lin = 0; lin < 5; lin++){
                    cout<<"| "<<m[col][lin]<<" | ";               
                    }
            cout<<"\n";
            } 
    
    
    cout<<"\n\n";	
    system("pause");
    return(0);
}
