#include <iostream>
#include "Queue.h"

int main() {
    system("chcp 1251 > nul");
    Queue queue;

    queue.enqueue(25);
    queue.enqueue(36);
    queue.enqueue(49);

    cout << "���������� �� �������: " << queue.dequeue() << endl; 
    
    queue.enqueue(64);

    cout << "���������� �� �������: " << queue.dequeue() << endl; 
    cout << "���������� �� �������: " << queue.dequeue() << endl;
    cout << "���������� �� �������: " << queue.dequeue() << endl;
    
    cout << queue.dequeue() << endl;

    return 0;
}