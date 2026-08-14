#include <iostream>
using namespace std;
class Node {
    public :
    int info;
    Node *next;
    Node(int data) {
        info = data;
        next = nullptr;
    }
};
void Push(Node* &top, int item){
    Node* temp = new Node(item);
    temp -> next = top;
    top = temp;
    cout<<item<<"pushed into stacks\n";

}
int Pop(Node* &top){
    if (top == nullptr) {
        cout<<"Stack Underflow\n";
        return -1;
    }
    Node* temp = top;
    int item = temp->info;
    top = top->next;
    delete temp;
    cout<<item<<"popped from stack\n";
    return item;
}
int Peek(Node* top){
    if (top == nullptr) {
        cout<<"Stack is empty\n";
        return -1;
    }
    return top->info;
}
void transverse(Node* top){
   cout<<"Stack elements are: ";
    Node* temp = top;
    while (temp != nullptr) {
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main (){
    
    Node* top = nullptr;
   Push(top,10);
   Push(top,20);
   Push(top,30);
    transverse(top);
    Push(top,220);
    Push(top,230);
    transverse(top);
    cout<<"Top element is: "<<Peek(top)<<endl;
    Pop(top);
    transverse(top);
    Pop(top);
    transverse(top);
    return 0;
}