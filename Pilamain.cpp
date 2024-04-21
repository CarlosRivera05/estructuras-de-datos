#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    Pila pila;
    int opcion;
    int elemento;

    do {
        cout << "\nMENU" << endl;
        cout << "1. Agregar elemento a la pila" << endl;
        cout << "2. Eliminar elemento de la pila" << endl;
        cout << "3. Ver elemento en la cima de la pila" << endl;
        cout << "0. Salir" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el elemento a agregar: ";
                cin >> elemento;
                pila.push(elemento);
                break;
            case 2:
                pila.pop();
                break;
            case 3:
                cout << "Elemento en la cima de la pila: " << pila.peek() << endl;
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción inválida." << endl;
        }
    } while(opcion != 0);

    return 0;
}
