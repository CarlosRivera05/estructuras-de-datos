#include"Nodo.h"
class Pila {
    Nodo* inicio;//Tope
public:
    Pila() {
        inicio = NULL;
    }
    void push();
    void pop();
    void show();
    void top();
    void size();
};
