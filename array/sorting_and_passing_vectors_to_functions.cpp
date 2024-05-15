#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {3,6,8,6,4,7,9,5,67,8,6,};
    sort(v.begin(),v.end());
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<&v;
    return 0;
}