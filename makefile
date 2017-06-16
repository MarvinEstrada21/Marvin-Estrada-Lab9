Main:	Main.cpp Usuarios.o Administradores.o Clientes.o Vehiculos.o 
	g++ Main.cpp Usuarios.o Administradores.o Clientes.o Vehiculos.o -o Main

Main.o:	Main.cpp Usuarios.h Administradores.h Clientes.h Vehiculos.h 
	g++ -c Main.cpp

Usuarios:	Usuarios.cpp Usuarios.h
	g++ -c Usuarios.cpp 

Administradores.o:	Administradores.cpp Administradores.h Usuarios.h
	g++ -c Administradores.cpp

Clientes.o:	Clientes.cpp Clientes.h Usuarios.h
	g++ -c Clientes.cpp

Vehiculos.o: Vehiculos.cpp Vehiculos.h
	g++ -c Vehiculos.cpp

	
clean:
	rm  *.o main 