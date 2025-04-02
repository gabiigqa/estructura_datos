#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

// Nodo de la cola doble
struct Nodo {
    int dato;
    Nodo* siguiente;
    Nodo* anterior;
    Nodo(int valor);
};

// Clase Deque (Cola Doble Dinámica)
class Deque {
private:
    Nodo* frente;
    Nodo* final;

public:
    Deque();
    ~Deque(); // Destructor para liberar memoria

    void insertarFrente(int valor);
    void insertarFinal(int valor);
    void eliminarFrente();
    void eliminarFinal();
    bool estaVacia() const;
    void mostrar() const;
};

#endif // DEQUE_H
   v