#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}