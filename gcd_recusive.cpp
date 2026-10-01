#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;       // base case
    return gcd(b, a % b);       // recursive call
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
    return 0;
}
