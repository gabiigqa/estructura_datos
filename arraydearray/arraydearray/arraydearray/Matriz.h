#pragma once
#include <iostream>
#include "Fila.h"

using namespace std;

class Matriz {
private:
    Fila filas[MAX];
    int totalFilas;
    int columnas;

public:
    Matriz(int totalFilas_, int columnas_) {
        totalFilas = totalFilas_;
        columnas = columnas_;
    }

    void setDato(int i, int j, int valor) {
        filas[i].set(j, valor);
    }

    int getDato(int i, int j) {
        return filas[i].get(j);
    }

    void mostrar() {
        for (int i = 0; i < totalFilas; i++) {
            filas[i].mostrar(columnas);
        }
    }

    int getFilas() {
        return totalFilas;
    }

    int getColumnas() {
        return columnas;
    }
};
