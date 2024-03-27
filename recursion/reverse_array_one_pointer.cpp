#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &vec, int l,int n){
    if(l>n/2) return;
    int temp;
    temp = vec[l];
    vec[l] = vec[n-l-1];
    vec[n-l-1] = temp;
    reverse(vec, l+1, n);
}
int main(){
    vector<int> vec = {23456,7653423,246577,756534,654};
    int l=0,n=vec.size();
    reverse(vec, l, n);
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}