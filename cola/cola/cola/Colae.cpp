#include "StdAfx.h"
#include "Colae.h"
#include <iostream>

using namespace std;

Colae::Colae(void)
{ 
	ini = 0; 
	fin = 0; }

bool Colae::ColaVacia (void) 
{ bool b_aux; 
if (ini == fin) 
	b_aux = true; 
else b_aux = false; 
return b_aux; }

bool Colae::Encolar(int Valor) 
{ bool error; 
  if (fin == MAX) 
		error = true; 
  else 
  { error = false;
	info [fin] = Valor;
	fin++; } 
return error; 
}

bool Colae::PrimeroCola (int &Valor) 
{ bool error; 
	if (ColaVacia() ) 
		error = true; 
	else 
{	error = false; 
	Valor = info[ini]; } 
	return error; }

bool Colae::Desencolar (void) 
{	bool error; 
	if (ColaVacia() ) 
		error = true;
	else 
	{ error = false; 
	ini++; } 
return error; }

void Colae::mostrar()
{
	for (int i=ini;i<=fin;i++)
		cout<<"["<<info[i]<<"]="<<endl;
	cout<<endl<<endl;
}



