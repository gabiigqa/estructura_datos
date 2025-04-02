// ejemploPiladinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    Nodo nuevo;
    Pila l;
    int opcion;
    do {
        system("cls");
        cout << "[:]Playlist" << endl;
        cout << "[1]Agregar cancion" << endl;
        cout << "[2]Quitar cancion" << endl;
        cout << "[3]Mostrar playlist" << endl;
        cout << "[4]Ultima cancion" << endl;
        cout << "[5]Tamaño de la playlist" << endl;
        cout << "[0]Salir" << endl;
        cout << "\nIngresa tu opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            l.push();
            break;
        case 2:
            l.pop();
            break;
        case 3:
            l.show();
            break;
        case 4:
            l.top();
            break;
        case 5:
            l.size();
            break;
        case 0:
            return 0;
            break;
        default:
            cout << "Por favor ingresa una opcion correcta.\n";
            break;
        }
    } while (opcion != 0);
    return 0;
}
