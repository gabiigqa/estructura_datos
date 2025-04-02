#include <iostream>
#include "CircularQueue.h"
using namespace std;

int main() {
    CircularQueue q;
    int option, value;

    cout << "== Circular Queue Menu ==\n";
    do {
        cout << "\n1. Enqueue (Add)\n";
        cout << "2. Dequeue (Remove)\n";
        cout << "3. Display Queue\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
    } while (option != 0);

    return 0;
}