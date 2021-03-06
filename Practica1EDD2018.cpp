// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest

#include "Practica1EDD2018.h"


ListaUsuario mlist;
PilaRecurso  mpila;
ColaServicio miCola;

std::string Practica1EDD2018::newuser(const usuario& User)
{
	 std::string result;
	 result = mlist.insertarLista(User);
	return result;
}


std::list<usuario> Practica1EDD2018::getUsuarios()
{
	std::list<usuario> lista;

	lista =mlist.linealizar();

	return lista;
}


std::string Practica1EDD2018::newrecurso(const recurso& R)
{
	std::string result = "no OK";

	mpila.push(R);

	result = "ok";

	return result;
}


std::list<servicio> Practica1EDD2018::getcolaservicios()
{
	std::list<servicio> cola;

	cola =miCola.linealizar();

	return cola;
}


std::string Practica1EDD2018::getrecurso( std::string& id)
{

	std::string resultado ="";

	//generamos id session aleatorio
	char aleatorio[10];
      srand(time(NULL));
       for(int i=0; i <= 9; i++)
       	aleatorio[i] = 33 + rand() % (126 - 33);


       std::string aux =std::string(aleatorio);

   usuario search = mlist.buscarUserId(id);
   recurso recursoAux =mpila.pop();


   if((search.nombre.compare("NULL")!=0)&&(recursoAux.tipo.compare("NULL")!=0)) 
   {
   		servicio nuevoServicio;
   		nuevoServicio.idSession = aux;
   		nuevoServicio.idUser    = search.nombre;
   		nuevoServicio.contenido = recursoAux.contenido;

   		miCola.encolar(nuevoServicio);

   		resultado ="recurso:{id session: "+aux+" usuario: "+search.nombre+" contenido : "+recursoAux.contenido;


   }else if(search.nombre.compare("NULL")==0)
   {
   	resultado = "usuario no existe";
   }else if(recursoAux.tipo.compare("NULL")==0)
   {

   		resultado = "la pila de recursos esta vacia";
   }
      




	return resultado;
}



