#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef USUARIOS_H
#define USUARIOS_H

class Usuarios{
	protected:
		string nombre_usuario;
		string contrasena;
	public:
		Usuarios();
		Usuarios(string,string);

		string getNombre_usuario();
		void setNombre_usuario(string);

		string getContrasena();
		void setContrasena(string);

		virtual ~Usuarios();
};
#endif