#include "Cola.h"
#include "Dato.h"
#include <iostream>

Cola::Cola() {
    inicio = fin = NULL;
}

void Cola::Pop() {
    if (inicio == NULL) {
        cout << "La cola está vacía" << endl;
        return;
    }
    else {}
    Nodo* temp = inicio;
    inicio = inicio->puntero;
    delete temp;
}


void Cola::Push(Dato d) {
    Nodo* elemento = new Nodo;
    if (inicio == nullptr) {
        elemento->dato.Nombre = d.Nombre;
        elemento->dato.Carrera = d.Carrera;
        elemento->dato.Codigo = d.Codigo;
        inicio = elemento;
        fin = elemento;
    }
    else {
        elemento->dato.Nombre = d.Nombre;
        elemento->dato.Carrera = d.Carrera;
        elemento->dato.Codigo = d.Codigo;        
        fin->puntero = elemento;
        fin = elemento;
    }
}

void Cola::Show() {
    if (isempty()) {
        cout << "No hay nada que mostrar" << endl;
    }
    else {
        Nodo* aux = inicio;
        int i = 1;
        while (aux != NULL) {
            cout << "Elemento " << i << ".- Nombre: " << aux->dato.Nombre << "\t Carrera: " << aux->dato.Carrera << "\t Codigo: " << aux->dato.Codigo << endl;
            aux = aux->puntero;
            i++;
        }
    }
}

bool Cola::isempty() {
    return inicio == NULL;
}
