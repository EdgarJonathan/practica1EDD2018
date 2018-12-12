#ifndef NodoCola
#define NodoCola

#include <string>

    struct servicio{
        std::string idSession;
        std::string idUser;
        std::string contenido;
    };

    class NCola
    {
        public:
        servicio Servicio;
        NCola* anterior;
        NCola* siguiente;


        NCola(servicio s);
        servicio datoNodo();
        NCola* getSiguiente();
        NCola* getAnterior();
        void setSiguiente(NCola* n);
        void setAnterior(NCola* n);
    };

#endif //NodoCola
