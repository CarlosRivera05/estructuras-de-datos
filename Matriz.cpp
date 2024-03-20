#include "Matriz.h"
#include <iostream>
#define MAX 20
using namespace std;

Matriz::Matriz() {

}
Matriz::~Matriz() {



}
void Matriz::set_fil(int F) {
	fil = F;

}
int	Matriz::  get_fil(){
	return fil;

}
void Matriz::set_col(int C) {
	col= C;

}
int Matriz:: get_col() {
	
	return col;

}
void Matriz:: mostrarmat(int MAT[MAX][MAX], int m, int n) {
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << MAT[i][j] << "\t";
		}
		cout << endl;
	}



}
void Matriz:: cargarmat(int MAT[MAX][MAX]) {
	for (int i = 0; i < fil; i++)
		for (int j = 0; j < col; j++) {
			cout << "MAT[" << i << "][" << j << "]= ";
			cin >> MAT[i][j];
		}


}
float Matriz:: promedio(int MAT[MAX][MAX], int m, int n) {
	float prom, s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			s = s + MAT[i][j];
	prom = s / (m * n);
	return prom;


}
int Matriz::mayor(int MAT[MAX][MAX], int m, int n) {
	int may = MAT[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (MAT[i][j] > may)
				may = MAT[i][j];
	return may;



}

