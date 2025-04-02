#include <iostream>
#include "Clientes.h"

using namespace std;

// Constructor: Inicializa la cola
Clientes::Clientes() {
    frente = 0;
    fin = 0;
    tamanio = 0;
}

// M�todo para agregar un cliente a la cola
void Clientes::enqueue(int cliente) {
    if (estaLlena()) {
        cout << "Error: La cola est� llena. No se puede agregar el cliente " << cliente << ".\n";
    }
    else {
        cola[fin] = cliente;
        fin = (fin + 1) % 5; // Usamos el operador % para que el �ndice sea c�clico
        tamanio++;
        cout << "Cliente " << cliente << " ha sido agregado a la cola.\n";
    }
}

// M�todo para atender al primer cliente de la cola
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

// M�todo para ver qui�n es el siguiente cliente sin eliminarlo
int Clientes::peek() {
    if (estaVacia()) {
        cout << "Error: La cola est� vac�a.\n";
        return -1; // Valor de error
    }
    else {
        return cola[frente];
    }
}

// M�todo para verificar si la cola est� vac�a
bool Clientes::estaVacia() {
    return tamanio == 0;
}

// M�todo para verificar si la cola est� llena
bool Clientes::estaLlena() {
    return tamanio == 5;
}

// M�todo para obtener el tama�o de la cola
int Clientes::tamanioCola() {
    return tamanio;
}
