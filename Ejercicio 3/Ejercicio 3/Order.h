#pragma once
#include<string>
#define MAX 100	
class Order {
public:
	void Agregar(string& prod[]);
private:
	int cima;
	int idPedido;
	int idCliente;
	int productos;
	int total;
	string prod[];
};

