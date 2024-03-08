#include <iostream>
#include "Vector.h"//obligatoria para usar la clase
#define MAX 100

using namespace std;
int main() {
	int tamanio, v[MAX], v2[MAX];

	Vector vector1;//declarar un ubjero, o isntancia de la clase
	Vector vector2;
	cout << "ingresar el numero de elementos del vector: ";
	// validadando la entrada. barbage in barbage out
	do {
		cin >> tamanio;
	} while (tamanio > MAX || tamanio < 0);
	vector1.set_n(tamanio);//cambia el valor del atributo n de la clase vector
	vector1.cargar(tamanio, v);
	vector1.mostrar(v);
	//vector1.ordenar(v, v2);
	//vector2.promedio(v, tamanio);


