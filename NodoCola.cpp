#include "NodoCola.h"

NCola::NCola(servicio s){
    Servicio = s;
    anterior =0;
    siguiente=0;
}

servicio NCola::datoNodo(){
    return Servicio;
}
NCola* NCola::getSiguiente(){
    return siguiente;
}
NCola* NCola::getAnterior(){
    return anterior;
}
void NCola::setSiguiente(NCola* n){
    siguiente=n;
}

void NCola::setAnterior(NCola* n){
    anterior=n;
}
