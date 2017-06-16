#include "Vehiculos.h"

Vehiculos :: Vehiculos() {

}

Vehiculos :: Vehiculos(string placa, string marca, string modelo, int anio, double precio, bool alquilado) {
   this -> placa = placa;
   this -> marca = marca;
   this -> modelo = modelo;
   this -> anio = anio;
   this -> precio = precio;
   this -> alquilado = alquilado;
}

void Vehiculos :: setPlaca(string placa) {
   this -> placa = placa;
}

string Vehiculos :: getPlaca() {
   return placa;
}

void Vehiculos :: setMarca(string marca) {
   this -> marca = marca;
}

string Vehiculos :: getMarca() {
   return marca;
}

void Vehiculos :: setModelo(string modelo) {
   this -> modelo = modelo;
}

string Vehiculos :: getModelo() {
   return modelo;
}

void Vehiculos :: setAnio(int anio) {
   this -> anio = anio;
}

int Vehiculos :: getAnio() {
   return anio;
}

void Vehiculos :: setPrecio(double precio) {
   this -> precio = precio;
}

double Vehiculos :: getPrecio() {
   return precio;
}

void Vehiculos :: setAlquilado(bool alquilado) {
   this -> alquilado = alquilado;
}

bool Vehiculos :: getAlquilado() {
   return alquilado;
}