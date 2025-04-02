// Ejemplopilaestatica.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "Pila.h"
#include "TipoDato.h"

using namespace std;

int main()
{
	Pila song;
	TipoDato song_;
	int opcion;
	do {
		cout << "KARAOKE" << endl;
		cout << "1. Push song" << endl;
		cout << "2. Pop song" << endl;
		cout << "3. View last song" << endl;
		cout << "4. Clean songs" << endl;
		cout << "5. View complete list" << endl;
		cout << "0. Salir" << endl;
		cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "Put on the name of the song: ";
			cin >> song_.id;
			cout << "Drop me the artist: ";
			cin >> song_.descripcion;
			song.Apilar(song_);
			break;
		case 2:
			song.Desapilar();
			break;
		case 3:
			song.CimaPila(song_);
			break;
		case 4:
			song.LimpiarPila();
			break;
		case 5:
			song.VerPila();
			break;
		case 0:
			cout << "Bye Bye...";
			break;
		default:
			cout << "Oops" << endl;
			break;
		}
	} while (opcion != 0);
	
}

