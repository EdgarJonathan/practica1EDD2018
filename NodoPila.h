#ifndef NodoPila
#define NodoPila

#include <string>

    struct recurso{
        std::string tipo;
        std::string contenido;
    };

    class NPila
    {
        public:
        recurso Recurso;
        NPila* anterior;
        NPila* siguiente;


        NPila(recurso R);
        recurso datoNodo();
        NPila* getSiguiente();
        NPila* getAnterior();
        void setSiguiente(NPila* n);
        void setAnterior(NPila* n);
    };

#endif //NodoPila
