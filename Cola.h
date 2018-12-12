#ifndef Cola
#define Cola

#include <list>
#include <string>
#include "NodoCola.h"

class ColaServicio
{

private:
    //atributos
    NCola* primeroC;
    NCola* ultimoC;


public:

    //constructor
    ColaServicio();

    //metodos
    void encolar(servicio s);
    servicio desencolar();
    void imprimirCola();

};

#endif // Cola
