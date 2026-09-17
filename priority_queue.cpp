// Write a C++ program to implement a priority queue that stores integers and displays them in both descending order (max‑heap) and ascending order (min‑heap). 
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Max-Heap (Descending order)
    priority_queue<int> maxHeap;
    maxHeap.push(10);
    maxHeap.push(5);
    maxHeap.push(20);

    cout << "Max-Heap (Descending): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    // Min-Heap (Ascending order)
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);

    cout << "Min-Heap (Ascending): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    return 0;
}
