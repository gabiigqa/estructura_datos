#include <iostream>
#include "Clientes.h"

using namespace std;

// Constructor: Inicializa la cola
Clientes::Clientes() {
    frente = 0;
    fin = 0;
    tamanio = 0;
}

// Método para agregar un cliente a la cola
void Clientes::enqueue(int cliente) {
    if (estaLlena()) {
        cout << "Error: La cola está llena. No se puede agregar el cliente " << cliente << ".\n";
    }
    else {
        cola[fin] = cliente;
        fin = (fin + 1) % 5; // Usamos el operador % para que el índice sea cíclico
        tamanio++;
        cout << "Cliente " << cliente << " ha sido agregado a la cola.\n";
    }
}

// Método para atender al primer cliente de la cola
void Clientes::dequeue() {
    if (estaVacia()) {
        cout << "Error: No hay clientes para atender.\n";
    }
    else {
        cout << "Cliente " << cola[frente] << " ha sido atendido.\n";
        frente = (frente + 1) % 5; // Avanzamos al siguiente cliente
        tamanio--;
    }
}

// Método para ver quién es el siguiente cliente sin eliminarlo
int Clientes::peek() {
    if (estaVacia()) {
        cout << "Error: La cola está vacía.\n";
        return -1; // Valor de error
    }
    else {
        return cola[frente];
    }
}

// Método para verificar si la cola está vacía
bool Clientes::estaVacia() {
    return tamanio == 0;
}

// Método para verificar si la cola está llena
bool Clientes::estaLlena() {
    return tamanio == 5;
}

// Método para obtener el tamaño de la cola
int Clientes::tamanioCola() {
    return tamanio;
}
