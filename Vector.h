
#pragma once
class Vector{
private:
	int n, vec[10];
public:
	Vector(void); //Constructor
	~Vector(void); //Destructor
	
	void set_n(int _n);
	int get_n();
	void cargarVector(int vec[], int n); //metodos
	void mostrarVector(int vec[], int n);
	void ordenarVector(int vec[], int n);
};
