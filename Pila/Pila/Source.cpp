#include <string>
#include <iostream>
#include "Pila.h"
using namespace std;
int main() 
{
	Pila pila;
	int opcion;
	do
	{
		cout << "1.- Push" << endl;
		cout << "2.- Pop" << endl;
		cout << "3.- Mostrar" << endl;
		cout << "4.- Peek" << endl;
		cout << "5.- IsEmpty" << endl;
		cout << "6.- Salir" << endl;
		cout << "Opcion: ";
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			if (pila.Push())
			{
				cout << "Elemento agregado" << endl;
			}
			else
			{
				cout << "No se pudo agregar el elemento" << endl;
			}
			break;
		case 2:
			if (pila.Pop())
			{
				cout << "Elemento eliminado" << endl;
			}
			else
			{
				cout << "No se pudo eliminar el elemento" << endl;
			}
			break;
		case 3:
			pila.Mostrar();
			break;
		case 4:
			pila.peek();
			break;
		case 5:
			pila.isempty();
			break;
		case 6:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
		}
	} while (opcion != 6);

