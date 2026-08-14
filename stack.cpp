#include <iostream>
#include <stack>
using namespace std;
int main () {
stack<string> cars;
//you cant add elements in stack just like you did in vector, you have to use push function to add elements in stack 
cars.push("ford");
cars.push("bmw");
cars.push("audi");
cout<<cars.top();
// to access another element you have to remove the first one using pop then use the same synatax to acceses the anotherone
cars.pop();
cout<<cars.top();
return 0;
}