#ifndef NodoUser
#define NodoUser

#include <string>

    struct usuario{
        std::string id;
        std::string nombre;
        std::string correo;
        std::string fecha;
    };

    class Nodo
    {
        protected:
        usuario user;
        Nodo* anterior;
        Nodo* siguiente;

        public:
        Nodo(usuario user);
        usuario datoNodo();
        Nodo* getSiguiente();
        Nodo* getAnterior();
        void setSiguiente(Nodo* n);
        void setAnterior(Nodo* n);
    };

#endif // NodoUser
