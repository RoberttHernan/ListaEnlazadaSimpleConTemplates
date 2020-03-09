#include <iostream>

#include "listaSimple.cpp"

using namespace std;

int main(){
    listaSimple<int> lista1;

    lista1.AddHead(1);
    lista1.AddHead(2);
    lista1.AddHead(3);
lista1.Print();
  
  return 0;
}