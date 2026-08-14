#include <bits/stdc++.h>
 using namespace std;
int main() {
stack<int> st;
st.push(38);
st.push(40);
st.push(11);
st.push(22);
st.push(33);
cout<<st.top()<<endl;
// you have to first pop the one then jabhi voh output dega
st.pop();
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;
return 0;
}