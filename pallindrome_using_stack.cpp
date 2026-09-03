// prgm to check a given input is a pallindrome or not using stack for both numbers and strings
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    stack<char> st;
    for(char c : s) st.push(c);

    string rev = "";
    while(!st.empty()) {
        rev += st.top();
        st.pop();
    }
    return s == rev;
}

int main() {
    int num;
    cout << "Enter a input: ";
    cin >> num;

    string str = to_string(num);

    if(isPalindrome(str))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";
    return 0;
}

