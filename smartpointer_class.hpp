//Vamos escrever um arquivo mestre que define uma classe de ponteiros smart para alocação de memória dinâmica
//Usaremos as funções malloc() e realloc() originalmente disponíveis em C e templates para implementação da classe de smartpointers


/*Cabeçalho*/
#include<iostream>
#include<cstdlib>
using namespace std;

//Classe de ponteiros smart

template <class T>
class smartpointer {
    //Membros da classe
    T* pointer; 
public:
    // Construtor da classe
    explicit smartpointer(){
    pointer = (T*)malloc(sizeof(T));
                           };
 
// Destruidor da classe
 ~smartpointer(){
pointer =(T*)realloc(pointer, 0); 
                };
 
// Overload do operador * de derreferência (retorna o valor apontado)
T& operator*(){
 return *pointer;
              };
 
// Overload do operador -> (retorna um dos membros de T, caso T seja um tipo composto: class, struct ou union)
 T* operator->(){
   return pointer;
                };

                  
                   };
 
