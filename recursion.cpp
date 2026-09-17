//find the sum of digit of no using recursion
#include <bits/stdc++.h>
using namespace std;

int sumDigits(int n) {
    if(n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum of digits = " << sumDigits(num) << endl;
    return 0;
}
