#include<bits/stdc++.h>
using namespace std;

void bs(vector<int> &vec){
    if(vec.size() == 1) return ;
    else{
        for(int i=0;i<vec.size()-1;i++){
            for(int j=1 ; j<vec.size()-i ; j++){
                if(vec[j-1] > vec[j]) swap(vec[j-1],vec[j]);
            }
        }
    }
}

int main(){
    vector<int> v = {9,1,8,7,43,6,8,3,67,9,6,5};
    bs(v);
    for(auto i=v.begin() ; i!=v.end() ; i++){
        cout<<*i<<" ";
    }
    return 0;
}