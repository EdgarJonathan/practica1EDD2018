#include <iostream>
#include "Lista.h"


using namespace std;

Nodo* ListaUsuario::buscarId(std::string d)
{
    Nodo* tmp = primero;
        while (tmp!=NULL) {
            if(tmp->datoNodo().id==d){
                return tmp;
            }
            tmp = tmp->getSiguiente();
        }
        return NULL;
}

ListaUsuario::ListaUsuario()
{
    primero = NULL;
    ultimo = NULL;
}
usuario ListaUsuario::getUsuario(std::string id)
{
    usuario result ={"","","",""};
    Nodo * search = buscarId(id);
    if(search!=NULL)
    {
        return search->datoNodo();
    }

    return result;

}

void ListaUsuario::insertarLista(usuario user)
{
      Nodo* nuevo;
      nuevo = new Nodo(user);

    if(primero==NULL)
    {
        primero = nuevo;
        primero->setSiguiente(NULL);
        primero->setAnterior(NULL);
        ultimo= primero;

    }else  if(buscarId(nuevo->datoNodo().id)==NULL)
    {
      ordenarLista(nuevo);
    }
    else
    {
         std::cout <<"id ya existe"<<endl;
    }

}

void ListaUsuario::ordenarLista(Nodo* nuevo)
{
        Nodo* actual =primero;

    //si el nuevo es menor al primero
    if(nuevo->datoNodo().nombre < primero->datoNodo().nombre )
    {
        primero->setAnterior(nuevo);
        nuevo->setSiguiente(primero);
        nuevo->setAnterior(NULL);
        primero = nuevo;

    }//si es mayor o igual ultimo
    else if(nuevo->datoNodo().nombre >= ultimo->datoNodo().nombre)
    {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        nuevo->setAnterior(NULL);
        ultimo=nuevo;

    }
    //recoriendo la lista si nuevo es mayor o igual actual
    //y si nuevo es menor o igual siguiente de actual
    else
    {

        while(actual!=ultimo)
        {
            if((nuevo->datoNodo().nombre >= actual->datoNodo().nombre)
               &&(nuevo->datoNodo().nombre <= actual->getSiguiente()->datoNodo().nombre))
            {
                nuevo->setSiguiente(actual->getSiguiente());
                nuevo->setAnterior(actual);
                actual->getSiguiente()->setAnterior(nuevo);
                actual->setSiguiente(nuevo);
                break;
            }

            actual=actual->getSiguiente();
        }

    }

}



std::list<usuario> ListaUsuario::linealizar()
{
    std::list<usuario> lista;
    Nodo *tmp = primero;
    while(tmp!=NULL){
        lista.push_back(tmp->datoNodo());
        tmp = tmp->getSiguiente();
    }
     return lista;
}



void ListaUsuario::imprimirLista()
{
    Nodo* actual =primero;
    while(actual!=NULL)
    {
       std::cout <<"<-["+actual->datoNodo().nombre+"]->"<<endl;

       actual=actual->getSiguiente();
    }
}
