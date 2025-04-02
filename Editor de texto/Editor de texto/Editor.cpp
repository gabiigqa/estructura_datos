#include <iostream>
#include "Editor.h"

using namespace std;

int main() {
    Editor editor;  // Crear el editor de texto
    string cambio;
    int opcion;

    do {
        cout << "\nEditor de texto - Menu:\n";
        cout << "1. Realizar cambio\n";
        cout << "2. Deshacer\n";
        cout << "3. Rehacer\n";
        cout << "4. Ver ultimo cambio\n";
        cout << "0. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        switch (opcion) {
        case 1:
            // Realizar un cambio
            cout << "Introduce el cambio: ";
            getline(cin, cambio); // Leer una línea de texto
            editor.realizarCambio(cambio);
            cout << "Cambio realizado con exito.\n";
            break;

        case 2:
            // Deshacer
            editor.deshacer();
            cout << "Ultimo cambio deshecho (si lo habia).\n";
            break;

        case 3:
            // Rehacer
            editor.rehacer();
            cout << "Ultimo cambio rehecho (si lo habia).\n";
            break;

        case 4:
            // Ver último cambio
            cout << "Ultimo cambio realizado: " << editor.verUltimoCambio() << endl;
            break;

        case 0:
            // Salir del programa
            cout << "Saliendo del editor...\n";
            return 0;

        default:
            cout << "Opcion invalida. Por favor, elige una opción valida.\n";
            break;
        }
    } while (opcion != 0);

    return 0;
}
