#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

class Queue {
public:
    Node* start;
    Node* end;
    int count = 0;   // renamed from size

    Queue() {
        start = NULL;
        end = NULL;
    }

    void push(int x) {
        Node* temp = new Node(x);

        if (start == NULL) {
            start = end = temp;
        } else {
            end->next = temp;
            end = temp;
        }

        count++;
    }

    void pop() {
        if (start == NULL) {
            cout << "Empty queue" << endl;
            return;
        }

        Node* temp = start;
        start = start->next;

        delete temp;
        count--;

        if (start == NULL) {
            end = NULL;
        }
    }

    int front() {
        if (start == NULL) {
            cout << "Empty queue" << endl;
            return -1;
        }
        return start->val;
    }

    int rear() {
        if (end == NULL) {
            cout << "Empty queue" << endl;
            return -1;
        }
        return end->val;
    }

    int size() {   // function now works fine
        return count;
    }

    void traverse() {
        if (start == NULL) {
            cout << "Empty queue" << endl;
            return;
        }

        Node* temp = start;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++) {
        q.push(arr[i]);
    }

    q.pop();
    q.traverse();

    cout << "front : " << q.front() << endl;
    cout << "rear : " << q.rear() << endl;
    // pop hone ke bd wala size
    q.pop();
    cout << "size : " << q.size() << endl;

    return 0;
}