#pragma once
class Clientes {
private:
    int cola[5]; // Arreglo que representa la cola
    int frente;  // �ndice del primer cliente en la cola
    int fin;     // �ndice del �ltimo cliente en la cola
    int tamanio; // N�mero de clientes en la cola

public:
    // Constructor para inicializar la cola
    Clientes();

    // M�todos de la cola
    void enqueue(int cliente);
    void dequeue();
    int peek();
    bool estaVacia();
    bool estaLlena();
    int tamanioCola();
};

