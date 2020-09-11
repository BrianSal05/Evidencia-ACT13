#include <iostream>
#include <fstream>

using namespace std;
//to-do
//Cargar archivo
//Separar datos
//Sort algorithm
//Menu
//Search algorithm
//Crear un nuevo archivo con los datos ordenados

void loadFile();
void sort();
void menu();
void search();
void print();
void writeFile();

int main()
{
	loadFile();
	menu();
}

void loadFile() {
	//bitacora.txt
	//Mes Dia Hora DireccionIP RazonF

	//verificar y encontrar el archivo en la misma carpeta del codigo
	//si no lo encuentra mandar mensaje "Error: el archivo no se pudo leer."
	//si lo encuentra leer linea por linea
		//guardar las informaciones en un vector de clases
		//mandar mensaje: "El archivo se guardo con exito."
}


void writeFile(){
	//crear un file temp
	//guardar/escribir en el file los datos ordenados
	//borrar el viejo file bitacora.txt
	//cambiar el nombre de temp a bitacora.txt
}

//clase con las informaciones de los accesos
