#define MAX_SIZE 100
class Pila {
private:
    int arreglo[MAX_SIZE];
    int top;

public:
    Pila();
    bool isEmpty();
    bool isFull();
    void push(int elemento);
    void pop();
    int peek();
};
