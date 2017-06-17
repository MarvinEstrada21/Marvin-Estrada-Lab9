#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <typeinfo>
#include <fstream>

#include "Usuarios.h"
#include "Administradores.h"
#include "Clientes.h"
#include "Vehiculos.h"

using namespace std;

string PLAleatorio();
vector<Vehiculos*> cargarVehiculos(vector<Vehiculos*>);
vector<Clientes*> cargarClientes(vector<Clientes*>);
vector<Administradores*> cargarAdministradores(vector<Administradores*>);

int main(){
	ofstream file;
	vector<Clientes*> lista_clientes;
	//lista_clientes = cargarClientes(lista_clientes);
	vector<Administradores*> lista_admin;
	//lista_admin = cargarAdministradores(lista_admin);
	vector<Vehiculos*> lista_vehiculos;
	//lista_vehiculos = cargarVehiculos(lista_vehiculos);
	int opcion = 0, tipo, seguro_social, op_admin;
	string nombre_usuario, contrasena, cargo, membresia;
	cout << "      MENU PRINCIPAL     " << endl
		<< "1.- Agregar usuario nuevo" << endl
		<< "2.- LogIn" << endl
		<< "3.- Salir" << endl;
	cout << "Ingrese la opción que desea realizar: ";
	cin >> opcion;
	cout << endl;
	while (opcion != 3) {
	    if (opcion == 1) {
	    	cout << "  USUARIO NUEVO  " << endl
	    		<< "1.- Administrador" << endl
	    		<< "2.- Cliente" << endl;
	    	cout << "Ingrese el tipo de usuario que desea crear: ";
	    	cin >> tipo;
	    	cout << endl;
	    	if (tipo == 1) {
	    		cout << "Ingrese el nombre de usuario: ";
	    		cin >> nombre_usuario;
	    		cout << "Ingrese la contraseña: ";
	    		cin >> contrasena;
	    		cout << "Ingrese el cargo: ";
	    		cin >> cargo;
	    		cout << "Ingrese el número de seguro social: ";
	    		cin >> seguro_social;
	    		lista_admin.push_back(new Administradores(cargo, seguro_social, nombre_usuario, contrasena));
	    		file.open("Administradores.txt");
	    		file << nombre_usuario;
	    		file << contrasena;
	    		file << cargo;
	    		file << seguro_social;
	    		file.close();
	    	}
	    	if (tipo == 2) {
	    		cout << "Ingrese el nombre de usuario: ";
	    		cin >> nombre_usuario;
	    		cout << "Ingrese la contraseña: ";
	    		cin >> contrasena;
	    		cout << "Ingrese el tipo de membresía que tiene: ";
	    		cin >> membresia;
	    		lista_clientes.push_back(new Clientes(membresia, nombre_usuario, contrasena));
	    		file.open("Clientes.txt");
	    		file << nombre_usuario;
	    		file << contrasena;
	    		file << membresia;
	    		file.close();
	    	}
	    }
	    if (opcion == 2) {
	    	int op_login;
	    	cout << "   MENU LOGIN    " << endl
	    		<< "1.- Administrador" << endl
	    		<< "2.- Cliente" << endl;
	    	cout << "Ingrese como desea entrar: ";
	    	cin >> op_login;
	    	if (op_login == 1) {
	    		string placa, marca, modelo, resp;
		    	int anio;
		    	double precio;
		    	cout << "Ingrese el nombre de usuario: ";
		    	cin >> nombre_usuario;
		    	cout << "Ingrese la contraseña: ";
		    	cin >> contrasena;
		    	for (int i = 0; i < lista_admin.size(); ++i) {
		    		if (lista_admin.at(i) -> getNombre_usuario() == nombre_usuario && lista_admin.at(i) -> getContrasena() == contrasena) {
		    			while (resp == "n") {
		    				cout << endl;
			    			cout << "  MENU ADMINISTRADOR   " << endl
			   					<< "1.- Agregar Vehículo" << endl
			    				<< "2.- Modificar" << endl
			    				<< "3.- Eliminar" << endl
			    				<< "4.- Listar Carros" << endl;
			    			cout << "Ingrese la opción que desea realizar: ";
			   				cin >> op_admin;
			   				if (op_admin == 1) {
			   					placa = PLAleatorio();
			   					cout << "Placa: " << placa << endl;
			    				cout << "Ingrese la marca del vehículo: ";
			    				cin >> marca;
			    				cout << "Ingrese el modelo del vehículo: ";
			   					cin >> modelo;
			   					cout << "Ingrese el año del vehículo: ";
								cin >> anio;
		   						cout << "Ingrese el precio del vehículo: ";
								cin >> precio;
			   					lista_vehiculos.push_back(new Vehiculos(placa, marca, modelo, anio, precio, false));
			   					file.open("Vehículos.txt");
			   					file << placa;
			   					file << marca;
			   					file << modelo;
			   					file << anio;
								file << precio;
			   					file.close();
			    			}
			    			if (op_admin == 2) {
			    				int numero;
			    				for (int j = 0; j < lista_vehiculos.size(); j++) {
			    					cout << j << " >>> " << lista_vehiculos.at(j) -> getPlaca() << endl;
			    					cout << j << " >>> " << lista_vehiculos.at(j) -> getMarca() << endl;
			    					cout << j << " >>> " << lista_vehiculos.at(j) -> getModelo() << endl;
			    					cout << j << " >>> " << lista_vehiculos.at(j) -> getAnio() << endl;
			    					cout << j << " >>> " << lista_vehiculos.at(j) -> getPrecio() << endl;
			    				}
			    				cout << "Ingrese la posición que desea modificar: ";
			    				cin >> numero;
			    				placa = PLAleatorio();
			    				cout << "Placa: " << placa << endl;
			    				cout << "Ingrese la marca del vehículo: ";
			   					cin >> marca;
			    				cout << "Ingrese el modelo del vehículo: ";
			    				cin >> modelo;
			    				cout << "Ingrese el año del vehículo: ";
			   					cin >> anio;
			   					cout << "Ingrese el precio del vehículo: ";
			   					cin >> precio;
								lista_vehiculos.at(numero) -> setPlaca(placa);
			   					lista_vehiculos.at(numero) -> setMarca(marca);
			   					lista_vehiculos.at(numero) -> setModelo(modelo);
			   					lista_vehiculos.at(numero) -> setAnio(anio);
			   					lista_vehiculos.at(numero) -> setPrecio(precio);
			    			}
			    			if (op_admin == 3) {
			    				int numero;
			    				for (int j = 0; j < lista_vehiculos.size(); j++) {
			    					cout << j << " >>> " << lista_vehiculos.at(j) -> getPlaca() << endl;
			   						cout << j << " >>> " << lista_vehiculos.at(j) -> getMarca() << endl;
			   						cout << j << " >>> " << lista_vehiculos.at(j) -> getModelo() << endl;
			   						cout << j << " >>> " << lista_vehiculos.at(j) -> getAnio() << endl;
			   						cout << j << " >>> " << lista_vehiculos.at(j) -> getPrecio() << endl;
		    					}
			    				cout << "Ingrese la posición que desea modificar: ";
			    				cin >> numero;
			    				lista_vehiculos.erase(lista_vehiculos.begin() + numero);
								cout << "Vehículo eliminada exitosamente";
			    			}
			    			if (op_admin == 4) {
			    				vector<Vehiculos*> cargarVehiculos(vector<Vehiculos*> lista_vehiculos); 
			    			}
			    			cout << "Cerrar Sesión? [s/n]: ";
			   				cin >> resp;
		    			}//while
		    		}//fin if
		    	}//fin for
	    	}//fin if op_login
	    	if (op_login == 2) {
	    		string resp;
		    	for (int i = 0; i < lista_clientes.size(); i++) {
		    		if (lista_clientes.at(i) -> getNombre_usuario() == nombre_usuario && lista_clientes.at(i) -> getContrasena() == contrasena) {
		    			while (resp == "n") {
		    				vector<Vehiculos*> cargarVehiculos(vector<Vehiculos*> lista_vehiculos); 
		    				cout << "Cerrar Sesión? [s/n]: ";
			    			cin >> resp;
		    			}
		    		}// fin if
		    	}//fin for
	    	}
	    } // opcion 2
	    cout << endl;
	    cout << "    MENU PRINCIPAL     " << endl
			<< "1.- Agregar usuario nuevo" << endl
			<< "2.- LogIn" << endl
			<< "3.- Salir" << endl;
	    cout << "Ingrese la opción que desea realizar: ";
	    cin >> opcion;
	    cout << endl;
	}
    return 0;
}

string PLAleatorio() {
	int random;
	stringstream aleat;
	string aleat2;
	for (int i = 0; i < 3; ++i) {
		random = rand() % 25 + 0;
		if (random == 0){
			aleat << "A";
		} else if (random == 1){
			aleat << "B";
		} else if (random == 2){
			aleat << "C";
		} else if (random == 3){
			aleat << "D";
		} else if (random == 4){
			aleat << "E";
		} else if (random == 5){
			aleat << "F";
		} else if (random == 6){
			aleat << "G";
		} else if (random == 7){
			aleat << "H";
		} else if (random == 8){
			aleat << "I";
		} else if (random == 9){
			aleat << "J";
		} else if (random == 10){
			aleat << "K";
		} else if (random == 11){
			aleat << "L";
		} else if (random == 12){
			aleat << "M";
		} else if (random == 13){
			aleat << "N";
		} else if (random == 14){
			aleat << "O";
		} else if (random == 15){
			aleat << "P";
		} else if (random == 16){
			aleat << "Q";
		} else if (random == 17){
			aleat << "R";
		} else if (random == 18){
			aleat << "S";
		} else if (random == 19){
			aleat << "T";
		} else if (random == 20){
			aleat << "U";
		} else if (random == 21){
			aleat << "V";
		} else if (random == 22){
			aleat << "W";
		} else if (random == 23){
			aleat << "X";
		} else if (random == 24){
			aleat << "Y";
		} else if (random == 25){
			aleat << "Z";
		} else {
			aleat << random;
		}
	}
	aleat << "-";
	for (int i = 1; i < 5; i++) {
		random = rand() % 9 + 1;
		aleat << random;
	}
	aleat2 = aleat.str();
	return aleat2;
}

vector<Vehiculos*> cargarVehiculos(vector<Vehiculos*> list_veh) {
	ifstream archivo("Vehículos.txt");
	while(!archivo.eof()) {
		string placa, marca, modelo;
		int anio;
		double precio;
 
		archivo >> placa;
		archivo >> marca;
		archivo >> modelo;
		archivo >> anio;
		archivo >> precio;
 	
 		Vehiculos* vehiculo = new Vehiculos(placa, marca, modelo, anio, precio, false);
		list_veh.push_back(vehiculo);
	}	
	return list_veh;		
}

vector<Clientes*> cargarClientes(vector<Clientes*> list_clients) {
	ifstream archivo("Clientes.txt");
	while(!archivo.eof()) {
		string membresia, nombre_usuario, contrasena;

   		archivo >> membresia;
   		archivo >> nombre_usuario;
   		archivo >> contrasena;
 	
 		Clientes* cliente = new Clientes(membresia, nombre_usuario, contrasena);
		list_clients.push_back(cliente);
	}	
	return list_clients;		
}

vector<Administradores*> cargarAdministradores(vector<Administradores*> list_admin) {
	ifstream archivo("Administradores.txt");
	while(!archivo.eof()) {
		string cargo, nombre_usuario, contrasena;
		int seguro_social;

   		archivo >> cargo;
   		archivo >> seguro_social;
   		archivo >> nombre_usuario;
   		archivo >> contrasena;
 	
 		Administradores* administrador = new Administradores(cargo, seguro_social, nombre_usuario, contrasena);
		list_admin.push_back(administrador);
	}	
	return list_admin;		
}