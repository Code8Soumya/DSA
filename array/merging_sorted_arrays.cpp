#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={2,4,6,7,7,7,7,7,7,7,7,8,9};
    vector<int> w={1,2,4,6,7,8,9};
    vector<int> n;
    int ptv=0,ptw=0;
    while(ptv<v.size() && ptw<w.size()){
        if(v[ptv] <= w[ptw]){
            n.push_back(v[ptv]);
            ptv++;
        }
        else {
            n.push_back(w[ptw]);
            ptw++;   
        }
    }
    while(ptv<v.size()) {
        n.push_back(v[ptv]);
        ptv++;
    }
    while(ptw<w.size()) {
        n.push_back(w[ptw]);
        ptw++;
    }
    for(auto it=n.begin();it!=n.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}