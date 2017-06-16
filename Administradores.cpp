#include "Administradores.h"

Administradores :: Administradores() : Usuarios() {

}

Administradores :: Administradores(string cargo,int seguro_social, string nombre_usuario, string contrasena) : Usuarios(nombre_usuario, contrasena){
	this -> cargo = cargo;
	this -> seguro_social = seguro_social;
}

void Administradores :: setCargo(string cargo) {
   this -> cargo = cargo;
}

string Administradores :: getCargo() {
   return cargo;
}

void Administradores :: setSeguro_social(int seguro_social) {
   this -> seguro_social = seguro_social;
}

int Administradores :: getSeguro_social() {
   return seguro_social;
}

Administradores :: ~Administradores() {

}