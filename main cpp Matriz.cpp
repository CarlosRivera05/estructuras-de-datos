#include "Matriz.h"
#define MAX 20 
using namespace std;
#include <iostream>


void main() {
	int matriz[MAX][MAX], fil, col, may, opc;

	float prom;
	Matriz M;
	do {
		cout << "Ingrese el numero de filas: ";
		cin >> fil;
	} while ((fil <= 0) || (fil > MAX));
	M.set_fil(fil);//camcbiando el valor del atributo


	do {
		cout << "Ingrese el numero de columnas: ";
		cin >> col;
	} while ((col <= 0) || (col > MAX));

	M.set_col(col);//cambiando el valor del atributo
	//Menu
	do {
		cout << "\t Menu\n";
		cout << "\t ====\n\n";
		cout << "(1) Cargar Matriz\n";
		cout << "(2) Mostrar Matriz\n";
		cout << "(3) Promedio Matriz\n";
		cout << "(4) Mayor Matriz\n";
		cout << "(0) Salir\n";
		cout << "Opcion:";
		cin >> opc;
		switch (opc) {
		case 1: M.cargarmat(matriz);
			break;
		case 2: M.mostrarmat(matriz, fil, col);
			break;
		case 3: prom = M.promedio(matriz, fil, col);
			cout << "El valor promedio es: " << prom << endl;
			break;
		case 4: cout << "El mayor es: " << M.mayor(matriz, fil, col);
			break;
		case 0: cout << "Salir\n";
			break;
		default: cout << "Error\n";
			break;
		}
	
		system("cls"); // Limpie la pantalla y funciona stdlib
	} while (opc != 0);
}

