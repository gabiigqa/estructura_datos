// ejemploPiladinamica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Pila.h"
#include "Nodo.h"

using namespace std;

int main() {
    Nodo nuevo;
    Pila l;
    int opcion;
    do {
        system("cls");
        cout << "[:]****MENU****" << endl;
        cout << "[1]Ingrese el nombre del artista" << endl;
        cout << "[2]Ingrese el nombre de la cancion" << endl;
        cout << "[3]Siguiente cancion" << endl;
        cout << "[4]Top" << endl;
        cout << "[5]Size" << endl;
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
