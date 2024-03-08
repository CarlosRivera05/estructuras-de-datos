#include "Vector.h"
#include <iostream>
using namespace std;
Vector::Vector() {

}
Vector::~Vector() {

}
void Vector::set_n(int _n) {
	//da calor al atriburo n o serea
	n = _n;
}
int Vector::get_n() {
	//devolver el valor del atributo n
	return n;

}
void Vector::cargar(int _n, int _vec[]) {
	//equivale a setear el vector, dar valor al vector
	//los arreglos funcionan por referancia no necesitan &
	for (int i = 0; i < _n; i++) {
		cout << "Vec[ "<<i<<"]= ";
		cin >> _vec[i];

	}
}
int Vector::mostrar(int _vec[]) {
	for (int i = 0; i < n; i++) {
		cout << "_Vec: [ " << i << "]= " << _vec[i] << endl;
	}
	return 0;
}
void Vector::ordenar(int _vec[], int _vec2[]) {
	int aux;
	for (int i = 0; i < n - 1; i++) {
		_vec2[i] = _vec[i];
		for (int j = i; j < n; j++) {
			if (_vec[i] > _vec[j])
			{
				aux = _vec[i];
				_vec[i] = _vec[j];
				_vec[j] = aux;
			}
		}
	}

}
int Vector::promedio(int _vec[], int _n) {
	int aux, acum = 0;
	for (int i = 0; i < _n; i++) {
		acum += _vec[i];
		aux = acum / _n;

	}
	return aux;
}
