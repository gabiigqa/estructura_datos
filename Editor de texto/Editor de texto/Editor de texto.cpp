#include "Editor.h"
#include <iostream>

// Constructor
Editor::Editor() {}

// Realiza un cambio y lo agrega a la pila de cambios
void Editor::realizarCambio(const string& cambio) {
    pilaCambios.push(cambio);
    // Limpiar la pila de rehacer cuando se realiza un nuevo cambio
    while (!pilaRehacer.empty()) {
        pilaRehacer.pop();
    }
}

// Deshace el último cambio y lo mueve a la pila de rehacer
void Editor::deshacer() {
    if (!pilaCambios.empty()) {
        string cambioDeshecho = pilaCambios.top();
        pilaCambios.pop();
        pilaRehacer.push(cambioDeshecho);
    }
    else {
        cout << "No hay cambios para deshacer.\n";
    }
}

// Rehace el último cambio deshecho y lo mueve de vuelta a la pila de cambios
void Editor::rehacer() {
    if (!pilaRehacer.empty()) {
        string cambioRehecho = pilaRehacer.top();
        pilaRehacer.pop();
        pilaCambios.push(cambioRehecho);
    }
    else {
        cout << "No hay cambios para rehacer.\n";
    }
}

// Muestra el último cambio realizado en el texto
string Editor::verUltimoCambio() const {
    if (!pilaCambios.empty()) {
        return pilaCambios.top();
    }
    else {
        return "No hay cambios realizados.";
    }
}

// Verifica si la pila de cambios está vacía
bool Editor::estaVacia() const {
    return pilaCambios.empty();
}
