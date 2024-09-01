#include<bits/stdc++.h>
using namespace std;

void sub(int idx, vector<int> &subseq, vector<int> &v){
    if(idx >= v.size()){
        for(auto it : subseq){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    subseq.push_back(v[idx]);
    sub(idx+1, subseq, v);
    subseq.pop_back();
    sub(idx+1, subseq, v);
}

int main(){
    vector<int> v = {0,1,2,3,4,5,6,7,8,9};
    vector<int> subseq;
    sub(0, subseq, v);
    return -1;
}