#include<bits/stdc++.h>
using namespace std;

int pv(vector<int> &v, int l, int r){
    int i=l, j=r, pivot=v[l];
    while(i<j){
        while(v[i]<=pivot && i<r) i++;
        while(v[j]>pivot && j>l) j--;
        if(i<j) swap(v[i],v[j]);
    }
    swap(v[l], v[j]);
    return j;
}
void qs(vector<int> &v, int l, int r){
    if(l>=r) return;
    int pivot;
    pivot = pv(v, l ,r);
    qs(v, l, pivot-1);
    qs(v, pivot+1, r);
}
int main(){
    vector<int> v = {2,3,7,5,4,1,2,9,8,4,6,3,5,8765,654,987,65};
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    cout<<endl;
    int l=0, r=v.size()-1;
    qs(v, l, r);
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    return 0;
}