#include "pila.h"
#include <iostream>
using namespace std;

Pila::Pila()
{
	Pila::cima = -1;
}

bool Pila::Push()
{
	if (cima == MAX - 1)
	{
		return false;
	}
	cima++;
	return true;
}
bool Pila::Pop()
{
	if (cima == -1)
	{
		cout << "No hay elementos en la pila" << endl;
		return false;
	}
	cima==cima - 1;
	return true;
}
void Pila::Mostrar()
{
	if (cima == -1)
	{
		cout << "No hay elementos en la pila" << endl;
		return;
	}
	for (int i = cima; i >= 0; i--)
	{
	cout << pila[i] << endl;
	}
}	
bool Pila::peek()
{
	if (cima == -1)
	{
		cout << "No hay elementos en la pila" << endl;
		return false;
	}
	cout << pila[cima] << endl;
	return true;
	}
bool Pila::isempty()
{
	if (cima == -1)
	{
		cout << "La pila esta vacia" << endl;
		return true;
	}
	cout << "La pila no esta vacia" << endl;
	return false;
	}
