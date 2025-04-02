#include "CircularQueue.h"
#include <iostream>
using namespace std;

CircularQueue::CircularQueue(int cap) {
    capacity = cap;
    queue = new int[capacity];
    front = rear = size = 0;
}

CircularQueue::~CircularQueue() {
    delete[] queue;
}

bool CircularQueue::isFull() const {
    return size == capacity;
}

bool CircularQueue::isEmpty() const {
    return size == 0;
}

void CircularQueue::expand() {
    int newCapacity = capacity * 2;
    int* newQueue = new int[newCapacity];

    for (int i = 0; i < size; ++i)
        newQueue[i] = queue[(front + i) % capacity];

    delete[] queue;
    queue = newQueue;
    capacity = newCapacity;
    front = 0;
    rear = size;
}

void CircularQueue::enqueue(int value) {
    if (isFull())
        expand();

    queue[rear] = value;
    rear = (rear + 1) % capacity;
    ++size;
}

void CircularQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }
    front = (front + 1) % capacity;
    --size;
}

void CircularQueue::display() const {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    for (int i = 0; i < size; ++i)
        cout << queue[(front + i) % capacity] << " ";
    cout << endl;
}