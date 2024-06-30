#include<bits/stdc++.h>
using namespace std;

void display(stack<int>& st){
    stack<int> gt;
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
    while(gt.size()>0){
        cout<<gt.top()<<" ";
        st.push(gt.top());
        gt.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    int idx = 3;
    int element = 100;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    display(st);
    stack<int> gt;
    int n = st.size();
    for(int i=0;i<(n-idx);i++){
        gt.push(st.top());
        st.pop();
    }
    st.push(element);
    while(gt.size()>0){
        st.push(gt.top());
        gt.pop();
    }
    display(st);
    return 0;
}