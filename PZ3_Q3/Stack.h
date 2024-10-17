#include <iostream> 
using namespace std;
class Stack {
private:
    static const int MAX = 10;
    int st[MAX];
public:
    int top;

    Stack() {
        top = -1;
    }

    void push(int var) {
        if (top < MAX - 1) { 
            st[++top] = var;
        }
        else {
            cout << "Ошибка: Стек переполнен!" << endl;
        }
    }

    int pop() {
        if (top >= 0) { 
            return st[top--];
        }
        else {
            return -1; 
        }
    }
};