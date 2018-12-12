#include <iostream>
#include <string>
#include "Pila.h"

PilaRecurso::PilaRecurso()
{
    primeroP = NULL;
    ultimoP = NULL;
}

void PilaRecurso::push(recurso R)
{
    NPila* nuevo;
    nuevo = new NPila(R);

    if(primeroP==NULL)
    {
       primeroP =nuevo;
    }else
    {
        primeroP->setAnterior(nuevo);
        nuevo->setSiguiente(primeroP);
        primeroP=nuevo;

    }

}


recurso PilaRecurso::pop()
{
    recurso aux={"NULL","NULL"};

    if(primeroP!=NULL)
    {
        aux  = primeroP->datoNodo();
        NPila* nuevo =primeroP;
        primeroP = primeroP->getSiguiente();
        nuevo->setSiguiente(NULL);

        free(nuevo);

         return aux;
    }


    return aux;

}

void PilaRecurso::imprimirPila()
{
    NPila* nuevo=primeroP;
    while(nuevo!=NULL)
    {
       std::string tipo = nuevo->datoNodo().tipo;
       std::string cont = nuevo->datoNodo().contenido;

       std::cout <<"[\"Tipo:\""<<tipo<<", \"Cont:\" "<<cont<<"]\n";

       nuevo = nuevo->getSiguiente();
    }
}




