#include "Usuarios.h"

Usuarios :: Usuarios() {

}

Usuarios :: Usuarios(string nombre_usuario, string contrasena) {
	this -> nombre_usuario = nombre_usuario;
	this -> contrasena = contrasena;
}

void Usuarios :: setNombre_usuario(string nombre_usuario) {
   this -> nombre_usuario = nombre_usuario;
}

string Usuarios :: getNombre_usuario() {
   return nombre_usuario;
}

void Usuarios :: setContrasena(string contrasena){
   this -> contrasena = contrasena;
}

string Usuarios :: getContrasena(){
   return contrasena;
}

Usuarios :: ~Usuarios() {
	
}