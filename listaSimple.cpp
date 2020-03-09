#include "listaSimple.h"

using namespace std ;

//contructor por defecto
template <typename T>

listaSimple <T>::listaSimple (){
    index = 0;
    head = NULL;

}
//Insertar al inicio 
template <typename T>
void listaSimple<T>::AddHead(T data)
{
    Nodo <T> *newNode = new Nodo<T> (data);
    Nodo <T> *temp = head;

    if (head==NULL){
        head = newNode;
       

    }else {
        newNode->setNext(head);
        head = newNode ;
       

    }
    index++;

}
template <typename T>
void listaSimple <T> ::Print(){
    Nodo <T> *temp = head;
    if(head==NULL){
        cout <<"Lista Vacia"<<endl;
    }
    else {
        while (temp!=NULL){
            temp->print();
            if(temp->getNext()==NULL){
                cout <<"NULL";
               
            }
             temp = temp->getNext();
        }
    }
    cout << endl << endl;
}
template <typename T>
listaSimple<T>::~listaSimple(){}




