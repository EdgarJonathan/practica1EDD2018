#include <iostream>
#include <string>
#include "Cola.h"

ColaServicio::ColaServicio()
{
    primeroC = NULL;
    ultimoC = NULL;
}

void ColaServicio::encolar(servicio s)
{
    NCola* nuevo;
    nuevo = new NCola(s);

    if(primeroC==NULL)
    {
       primeroC=nuevo;
       ultimoC =primeroC;
    }else
    {
        primeroC->setAnterior(nuevo);
        nuevo->setSiguiente(primeroC);
        primeroC=nuevo;

    }

}


servicio ColaServicio::desencolar()
{
    servicio aux={"NULL","NULL","NULL"};

    if(primeroC!=ultimoC)
    {
        aux  = ultimoC->datoNodo();
        NCola* nuevo =ultimoC;
        ultimoC = ultimoC->anterior;
        ultimoC->setSiguiente(NULL);

        nuevo->setAnterior(NULL);

        free(nuevo);

         return aux;
    }else
    {
        primeroC=NULL;
        ultimoC =NULL;
    }


    return aux;

}

void ColaServicio::imprimirCola()
{
    NCola* nuevo=primeroC;
    while(nuevo!=NULL)
    {
       std::string idSesion = nuevo->datoNodo().idSession;
       std::string idUser   = nuevo->datoNodo().idUser;
       std::string cont     = nuevo->datoNodo().contenido;

       std::cout <<"[\"idSesion:\""<<idSesion<<", \"idUser:\" "<<idUser<<",\"Cont:\""<<cont<<" ]\n";

       nuevo = nuevo->getSiguiente();
    }
}




