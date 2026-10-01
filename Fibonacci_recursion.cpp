// program for finding nth fibonacci number using recursion and improving its run time to save stack operations
#include <bits/stdc++.h>
using namespace std;

map<int,long long> dp;

long long fib(int n) {
    if (n <= 1) return n;
    if (dp.count(n)) return dp[n];
    return dp[n] = fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}

