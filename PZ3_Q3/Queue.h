#include "Stack.h"
#include <iostream>

class Queue {
private:
    Stack stack1;
    Stack stack2;

public:
    
    void enqueue(int value) {
        stack1.push(value);
       cout << "Добавлено в очередь: " << value << endl; 
    }

    
    int dequeue() {
        if (stack2.top == -1) { 
            while (stack1.top != -1) { 
                stack2.push(stack1.pop());
            }
        }

        if (stack2.top == -1) { 
           cout << "Ошибка: Очередь пуста! Невозможно извлечь элемент." << endl;
        }

        return stack2.pop(); 
    }
};