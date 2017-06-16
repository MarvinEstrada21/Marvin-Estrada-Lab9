#include <iostream>
#include <string>
#include <vector>
#include "Usuarios.h"

using namespace std;

#ifndef CLIENTES_H
#define CLIENTES_H

class Clientes : public Usuarios {
	private:
		string membresia;
	public:
		Clientes();
		Clientes(string, string, string);

		string getMembresia();
		void setMembresia(string);

		~Clientes();
};
#endif