#include "Deque.h"

// Constructor del nodo
Nodo::Nodo(int valor) {
    dato = valor;
    siguiente = anterior = nullptr;
}

// Constructor de la cola doble
Deque::Deque() {
    frente = final = nullptr;
}

// Destructor para liberar memoria
Deque::~Deque() {
    while (!estaVacia()) {
        eliminarFrente();
    }
}

// Verifica si la cola está vacía
bool Deque::estaVacia() const {
    return frente == nullptr;
}

// Insertar al frente
void Deque::insertarFrente(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (estaVacia()) {
        frente = final = nuevo;
    }
    else {
        nuevo->siguiente = frente;
        frente->anterior = nuevo;
        frente = nuevo;
    }
    cout << "Insertado al frente: " << valor << endl;
}

// Insertar al final
void Deque::insertarFinal(int valor) {
    Nodo* nuevo = new Nodo(valor);
    if (estaVacia()) {
        frente = final = nuevo;
    }
    else {
        final->siguiente = nuevo;
        nuevo->anterior = final;
        final = nuevo;
    }
    cout << "Insertado al final: " << valor << endl;
}

// Eliminar del frente
void Deque::eliminarFrente() {
    if (estaVacia()) {
        cout << "La cola está vacía.\n";
        return;
    }
    Nodo* temp = frente;
    frente = frente->siguiente;
    if (frente) {
        frente->anterior = nullptr;
    }
    else {
        final = nullptr;  // La cola quedó vacía
    }
    cout << "Eliminado del frente: " << temp->dato << endl;
    delete temp;
}

// Eliminar del final
void Deque::eliminarFinal() {
    if (estaVacia()) {
        cout << "La cola está vacía.\n";
        return;
    }
    Nodo* temp = final;
    final = final->anterior;
    if (final) {
        final->siguiente = nullptr;
    }
    else {
        frente = nullptr;  // La cola quedó vacía
    }
    cout << "Eliminado del final: " << temp->dato << endl;
    delete temp;
}

// Mostrar la cola
void Deque::mostrar() const {
    if (estaVacia()) {
        cout << "La cola está vacía.\n";
        return;
    }
    Nodo* temp = frente;
    cout << "Cola doble: ";
    while (temp) {
        cout << temp->dato << " ";
        temp = temp->siguiente;
    }
    cout << endl;
}
