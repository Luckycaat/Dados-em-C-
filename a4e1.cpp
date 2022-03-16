#include <iostream>
#include <Windows.h>
using namespace std;
int main(){
    string sit;
    //Criando o tipo de dado aluno
    struct aluno{
           string nome;
           string nasc;
           int mat;
           string end;
           bool ap;
           float nota;
           };
    
    //Declarando um aluno manuealmente e preenchendo seus campos
    /*aluno pedro;
    pedro.nome = "Pedro";
    pedro.nasc = "07/05/2001";
    pedro.mat = 123456;
    pedro.end = "Rua Ere....";
    pedro.ap = true;
    pedro.nota = 100;   
    */
    
    //Declarando um aluno com base em dados inseridos pelo usuario
    aluno cadastro[10];
    cout<<"~~~~VAMOS CADASTRAR ALUNOS~~~~\n";
    for(int cont = 0; cont<10; cont++){
          cout<<"ALUNO "<<cont+1;   
          cout<<"\nDigite um nome:     ";
          cin>>cadastro[cont].nome;
          cout<<"\nData de Nascimento: ";
          cin>>cadastro[cont].nasc;
          cout<<"\nMatricula:          ";
          cin>>cadastro[cont].mat;
          cout<<"\nEndereco:           ";
          cin>>cadastro[cont].end;
          cout<<"\nSituacao:           ";
          cout<<"\na = aprovado | r = reprovado ";
          cin>>sit;
          if(sit == "a"){
                 cadastro[cont].ap = true;
                 }
                 else{
                      cadastro[cont].ap = false;
                 }
          cout<<"\nNota:               ";
          cin>>cadastro[cont].nota;
          system("cls");
          }
    
    cout<<"\n\n";
    
    /*Imprimindo o aluno cadastrado manualmente
    cout<<"~~~ALUNO CADASTRADO~~~\n";
    cout<<"Aluno cadastrado por linha de codigo\n";
    cout<<"Nome:          "<<pedro.nome<<"\n";
    cout<<"DT Nascimento: "<<pedro.nasc<<"\n";
    cout<<"Matricula:     "<<pedro.mat<<"\n";
    cout<<"Endereco:      "<<pedro.end<<"\n";
    if (pedro.ap == true){
                 cout<<"Situacao:      APROVADO"<<"\n";
                 }
                 else{
                      cout<<"Situacao:      REPROVADO"<<"\n";
                      }
    cout<<"Nota:          "<<pedro.nota;
    cout<<"\n\n";
    */
    
    //Imprimindo o aluno cadastrado
    for(int cont = 0; cont<10; cont++){
          cout<<"ALUNO "<<cont+1<<"\n"; 
          cout<<"Nome:          "<<cadastro[cont].nome<<"\n";
          cout<<"DT Nascimento: "<<cadastro[cont].nasc<<"\n";
          cout<<"Matricula:     "<<cadastro[cont].mat<<"\n";
          cout<<"Endereco:      "<<cadastro[cont].end<<"\n";
          if (cadastro[cont].ap == true){
                           cout<<"Situacao:      APROVADO"<<"\n";
                           }
                           else{
                                cout<<"Situacao:      REPROVADO"<<"\n";
                                }
          cout<<"Nota:          "<<cadastro[cont].nota;
          cout<<"\n\n";
    }
           
    cout<<"\n\n";	
    system("pause");
    return(0);       
    }
