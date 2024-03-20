#pragma once
#define MAX 20

class Matriz
{
	private: 
		int fil;
		int col;
		int M[MAX][MAX];
	public:
		Matriz();
		~Matriz();
		void set_fil(int F);
		int get_fil();
		void set_col(int C);
		int get_col();
		void mostrarmat(int MAT[MAX][MAX], int m, int n);
		void cargarmat(int MAT[MAX][MAX]);
		float promedio(int MAT[MAX][MAX], int m, int n);
		int mayor(int MAT[MAX][MAX], int m, int n);







};

