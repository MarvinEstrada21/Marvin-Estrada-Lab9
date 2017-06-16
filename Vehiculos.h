#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef VEHICULOS_H
#define VEHICULOS_H

class Vehiculos{
	private:
		string placa;
		string marca;
		string modelo;
		int anio;
		double precio;
		bool alquilado;
	public:
		Vehiculos();
		Vehiculos(string, string, string, int, double, bool);

		string getPlaca();
		void setPlaca(string);

		string getMarca();
		void setMarca(string);

		string getModelo();
		void setModelo(string);

		int getAnio();
		void setAnio(int);

		double getPrecio();
		void setPrecio(double);

		bool getAlquilado();
		void setAlquilado(bool);
};
#endif