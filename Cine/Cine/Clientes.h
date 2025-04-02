#pragma once
class Clientes {
private:
    int cola[5]; // Arreglo que representa la cola
    int frente;  // Índice del primer cliente en la cola
    int fin;     // Índice del último cliente en la cola
    int tamanio; // Número de clientes en la cola

public:
    // Constructor para inicializar la cola
    Clientes();

    // Métodos de la cola
    void enqueue(int cliente);
    void dequeue();
    int peek();
    bool estaVacia();
    bool estaLlena();
    int tamanioCola();
};

