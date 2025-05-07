#pragma once
#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string nombre;
    int nota;
    Node* next;
};

class LinkedList {
private:
    Node* first;
public:
    LinkedList() {
        first = nullptr;
    }

    LinkedList(string nombres[], int notas[], int n);
    void display();
    int contarAprobados();
    int contarReprobados();
    void notaMasAlta();
    void notaMasBaja();
};