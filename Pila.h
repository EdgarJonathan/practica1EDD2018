#ifndef Pila
#define Pila

#include <list>
#include <string>
#include "NodoPila.h"

class PilaRecurso
{

private:
    //atributos
    NPila* primeroP;
    NPila* ultimoP;


public:

    //constructor
    PilaRecurso();

    //metodos
    void push(recurso R);
    recurso pop();
    void imprimirPila();

};

#endif // Pila
