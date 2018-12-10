#include "NodoUser.h"
Nodo::Nodo(usuario d){
    user = d;
    anterior =0;
    siguiente=0;
}

usuario Nodo::datoNodo(){
    return user;
}
Nodo* Nodo::getSiguiente(){
    return siguiente;
}
Nodo* Nodo::getAnterior(){
    return anterior;
}
void Nodo::setSiguiente(Nodo* n){
    siguiente=n;
}

void Nodo::setAnterior(Nodo* n){
    anterior=n;
}
