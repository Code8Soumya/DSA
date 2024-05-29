#include<iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<int,int>mpp;
    mpp[2] = 0;
    mpp[3] = 7;
    if(mpp.find(2) != mpp.end()){
        cout<<"yes";
    }
    return 0;
}