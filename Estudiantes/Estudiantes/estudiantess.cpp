#include "estudiantess.h"
#include <iostream>
#include <string>
using namespace std;

LinkedList::LinkedList(string nombres[], int notas[], int n) {
    Node* t, * last;
    first = new Node();
    first->nombre = nombres[0];
    first->nota = notas[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++) {
        t = new Node();
        t->nombre = nombres[i];
        t->nota = notas[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void LinkedList::display() {
    Node* p = first;
    cout << "Estudiantes y sus notas:\n";
    while (p) {
        cout << p->nombre << ": " << p->nota << endl;
        p = p->next;
    }
}

int LinkedList::contarAprobados() {
    int count = 0;
    Node* p = first;
    while (p) {
        if (p->nota >= 60) count++;
        p = p->next;
    }
    return count;
}

int LinkedList::contarReprobados() {
    int count = 0;
    Node* p = first;
    while (p) {
        if (p->nota < 60) count++;
        p = p->next;
    }
    return count;
}

void LinkedList::notaMasAlta() {
    Node* p = first;
    int maxNota = p->nota;
    string nombre = p->nombre;
    p = p->next;
    while (p) {
        if (p->nota > maxNota) {
            maxNota = p->nota;
            nombre = p->nombre;
        }
        p = p->next;
    }
    cout << "Nota más alta: " << maxNota << " (" << nombre << ")" << endl;
}

void LinkedList::notaMasBaja() {
    Node* p = first;
    int minNota = p->nota;
    string nombre = p->nombre;
    p = p->next;
    while (p) {
        if (p->nota < minNota) {
            minNota = p->nota;
            nombre = p->nombre;
        }
        p = p->next;
    }
    cout << "Nota más baja: " << minNota << " (" << nombre << ")" << endl;
}
