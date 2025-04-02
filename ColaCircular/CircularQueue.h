#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

class CircularQueue {
private:
    int* queue;
    int capacity;
    int front;
    int rear;
    int size;

    void expand();

public:
    CircularQueue(int cap = 4);
    ~CircularQueue();

    void enqueue(int value);
    void dequeue();
    void display() const;
    bool isEmpty() const;
    bool isFull() const;
};

#endif