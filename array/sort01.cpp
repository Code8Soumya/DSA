#include<bits/stdc++.h>
using namespace std;

void sort01(vector<int> &v){
    if (v.size()<=2) return;
    int l=0,r=v.size()-1;
    while(l<r){
        if(v[l] == 0) l++;
        if(v[r] == 1) r--;
        if(v[l] == 1 && v[r] == 0 && l < r){
            v[l] = 0;
            v[r] = 1;
            l++;
            r--;
        }
    }
}

int main(){
    vector<int> v = {1,1,0,1,0,1,1,0};
    sort01(v);
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    return 0;
}