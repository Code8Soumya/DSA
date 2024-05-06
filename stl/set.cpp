#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1={1,5,4,7,2,3,9,7,4,5,6,3,2,1,7,6,5,9,8};
    vector<int> v2={1,2,3,4,5,6,7,8,9};
    set<int> s;

    for(auto it=v1.begin();it!=v1.end();it++){
        s.insert(*it);
    }
    for(auto it=v2.begin();it!=v2.end();it++){
        s.insert(*it);
    }
    for(auto it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
    
    return 0;
}