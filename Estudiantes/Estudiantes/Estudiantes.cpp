#include <iostream>
#include "estudiantess.h"
using namespace std;

int main() {
    string estudiantes[] = { "Ana","Luis","Maria","Pedro" };
    int notas[] = { 90,40,80,30 };
    int n = sizeof(notas) / sizeof(notas[0]);

    LinkedList lista(estudiantes, notas, n);

    lista.display();
    cout << "Cantidad de aprobados: " << lista.contarAprobados() << endl;
    cout << "Cantidad de reprobados: " << lista.contarReprobados() << endl;
    lista.notaMasAlta();
    lista.notaMasBaja();

    return 0;
}