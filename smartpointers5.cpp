//Um programa para testar o módulo smartpointer2.hpp

/*Cabeçalho*/
#include<iostream>
#include"smartpointer_class.hpp"
using namespace std;

int main(){
//Declaração de variáveis
smartpointer<int> pointer;
cout<<"Digite um número: \n";
cin>>*pointer;
cout<<"O número digitado é "<<*pointer<<".\n";
return 0;
          }
