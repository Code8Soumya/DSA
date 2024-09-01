#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int, int> mpp;
    mpp[1]++;
    mpp[2]++;
    cout<<mpp[1]<<' '<<mpp.size()<<' ';
    mpp.erase(1);
    cout<<mpp.size();
    return 0;
}