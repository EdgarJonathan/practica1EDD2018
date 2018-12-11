#ifndef Lista
#define Lista

#include <list>
#include <string>
#include "NodoUser.h"

class  ListaUsuario
{
private:
    Nodo* buscarId(std::string d);
    void ordenarLista(Nodo* nuevo);
public:
    Nodo* primero;
    Nodo* ultimo;
    ListaUsuario();
    std::string insertarLista(usuario user);

    usuario getUsuario(std::string id);
    std::list<usuario> linealizar();

    void imprimirLista();
};

#endif // Lista
