#pragma once
#define MAX 100
class Pila
{
private:
	int pila[MAX];
	int cima;
public:
	Pila();
	bool Push();
	bool Pop();	
	void Mostrar();
	bool peek();	
	bool isempty();	
};




