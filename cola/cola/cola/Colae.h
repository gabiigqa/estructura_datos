#pragma once
#define MAX 100

class Colae
{ private: 
	int info[MAX]; 
	int ini, fin;
 public: 
	Colae (void); 
	bool Encolar (int Valor); 
	bool Desencolar (void); 
	bool PrimeroCola (int &Valor); 
	bool ColaVacia (void);
	void mostrar (void);
};


