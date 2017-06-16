#include <iostream>
#include <string>
#include <vector>
#include "Usuarios.h"

using namespace std;

#ifndef ADMINISTRADORES_H
#define ADMINISTRADORES_H

class Administradores : public Usuarios {
	private:
		string cargo;
		int seguro_social;
	public:
		Administradores();
		Administradores(string, int, string, string);

		string getCargo();
		void setCargo(string);

		int getSeguro_social();
		void setSeguro_social(int);

		~Administradores();
};
#endif