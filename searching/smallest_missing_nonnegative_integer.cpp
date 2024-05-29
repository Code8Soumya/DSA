#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {0,1,3,4,5,6,7,9,10};
    int n = v.size();
    int l = 0;
    int r = n-1;
    int mid = -1;
    int ans = -1;
    while(l <= r){
        mid = l+(r-l)/2;
        if(v[mid] != mid) {
            r=mid-1;
            ans = mid;
        }
        else l=mid+1;
    }
    cout<<"Missing number is: "<<mid;
    return 0;
}