#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include "Colae.h"

#define MAX 100

using namespace std;

void main()
{
	Colae cola;
	int Valor, opcion;
	do {
		cout << "SPOTIFY" << endl;
		cout << "1. La cola esta vacia?" << endl;
		cout << "2. Encolar" << endl;
		cout << "3. Desencolar" << endl;
		cout << "4. Mostrar cola" << endl;
		cout << "5 Primero en la cola" << endl;
		cout << "0. Finalizar" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			if (cola.ColaVacia())
				cout << "La cola esta vacia" << endl;
			else
				cout << "Tiene valores en la cola" << endl;
			break;
		case 2:
			cout << "Ingrese la cancion:" << endl;
			cin >> Valor;
			if (cola.Encolar(Valor))
				cout << "No se logro encolar la cancion" << endl;
			else
				cout << "Cancion encolada correctamente" << endl;
			break;
		case 3:
			if (cola.Desencolar())
				cout << "Error, no se logro desencolar" << endl;
			else
				cout << "Desencolado con exito" << endl;
			break;
		case 4:
			cola.mostrar();
			break;
		case 5:
			if (cola.PrimeroCola(Valor))
				cout << "Cola vacia" << endl;
			else
				cout << "El primero en la cola es: " << Valor << endl;;
			break;
		case 0:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Error de opcion" << endl;
		}
	} while (opcion != 0);
}
	