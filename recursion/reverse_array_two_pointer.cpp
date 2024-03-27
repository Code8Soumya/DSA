#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &vec, int l,int r){
    if(l>=r) return;
    int temp;
    temp = vec[l];
    vec[l] = vec[r];
    vec[r] = temp;
    reverse(vec, l+1, r-1);
}
int main(){
    vector<int> vec = {23456,7653423,246577,756534};
    int l=0,r=vec.size()-1;
    reverse(vec, l, r);
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}