#ifndef Lista
#define Lista

#include <list>
#include <string>
#include "NodoUser.h"

class  ListaUsuario
{
private:

    void ordenarLista(Nodo* nuevo);
     Nodo* buscarId(std::string d);
public:

    usuario buscarUserId(std::string d);
    Nodo* primero;
    Nodo* ultimo;
    ListaUsuario();
    std::string insertarLista(usuario user);

    usuario getUsuario(std::string id);
    std::list<usuario> linealizar();

    void imprimirLista();
};

#endif // Lista
