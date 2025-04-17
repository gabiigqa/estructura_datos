#pragma once
#include <iostream>
#define MAX 10

using namespace std;

class Fila {
private:
    int elementos[MAX];

public:
    Fila() {
    }
    void set(int i, int valor) {
        elementos[i] = valor;
    }

    int get(int i) {
        return elementos[i];
    }

    void mostrar(int n) {
        for (int i = 0; i < n; i++) {
            cout << elementos[i] << "\t";
        }
        cout << endl;
    }
};

