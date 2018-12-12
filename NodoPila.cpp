#include "NodoPila.h"

NPila::NPila(recurso R){
    Recurso = R;
    anterior =0;
    siguiente=0;
}

recurso NPila::datoNodo(){
    return Recurso;
}
NPila* NPila::getSiguiente(){
    return siguiente;
}
NPila* NPila::getAnterior(){
    return anterior;
}
void NPila::setSiguiente(NPila* n){
    siguiente=n;
}

void NPila::setAnterior(NPila* n){
    anterior=n;
}
