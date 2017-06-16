#include "Clientes.h"

Clientes :: Clientes() : Usuarios() {

}

Clientes :: Clientes(string membresia, string nombre_usuario, string contrasena) : Usuarios(nombre_usuario, contrasena) {
	this -> membresia = membresia;
}

void Clientes :: setMembresia(string membresia) {
   this -> membresia = membresia;
}

string Clientes :: getMembresia() {
   return membresia;
}

Clientes :: ~Clientes() {

}