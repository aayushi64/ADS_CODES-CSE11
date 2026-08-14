#include <bits/stdc++.h>
using namespace std;

int n = 5;              // stack size
int stackArr[5];        // stack array
int top = -1;           // ye isliye use krenge ki abhi stack khali hai 

bool isEmpty() {
    return top <= -1;   // function boolen is used to check if stack is empty and returns true
}

bool isFull() {
    return top >= n-1;  // same here; true if stack is full
}

void push(int ITEM) {
    if (isFull()) {
        cout << "Overflow" << endl;
    } else {
        top++;
        stackArr[top] = ITEM;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Underflow" << endl;
    } else {
        cout << "The element popped is: " << stackArr[top] << endl;
        top--;
    }
}

void traverse() {
    if (!isEmpty()) {
        cout << "Stack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
        cout << "Top element is: " << stackArr[top] << endl;
    } else {
        cout << "Stack is empty" << endl;
    }
}

int main() {
    int ch, ITEM;
    cout << "1) Push" << endl;
    cout << "2) Pop" << endl;
    cout << "3) Traverse" << endl;
    cout << "4) Exit" << endl;

    do {
        cout << "Enter choice: ";
        cin >> ch;
        switch (ch) {
            case 1: {
                cout << "Enter ITEM: ";
                cin >> ITEM;
                push(ITEM);
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                traverse();
                break;
            }
            case 4: {
                cout << "Exit" << endl;
                break;
            }
            default: {
                cout << "Invalid choice" << endl;
            }
        }
    } while (ch != 4);

    return 0;
}
