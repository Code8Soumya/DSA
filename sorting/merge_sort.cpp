#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int mid, int r){
    int p = l, q = mid+1;
    vector<int> temp;
    while(p<=mid && q<=r){
        if(v[p]<=v[q]){
            temp.push_back(v[p]);
            p++;
        }
        else{
            temp.push_back(v[q]);
            q++;
        }
    }
    while(p<=mid){
        temp.push_back(v[p]);
        p++;
    }
    while(q<=r){
        temp.push_back(v[q]);
        q++;
    }
    for(int i=l;i<=r;i++){
        v[i] = temp[i-l];
    }
}
void ms(vector<int> &v, int l, int r){
    if(l>=r) return;
    int mid;
    mid = l+((r-l)/2);
    ms(v, l, mid);
    ms(v, mid+1, r);
    merge(v, l, mid, r);
}
int main(){
    vector<int> v = {2,3,7,5,4,1,2,9,8,4,6,3,5,8765,654,987,65};
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    cout<<endl;
    int l=0, r=v.size()-1;
    ms(v, l, r);
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    return 0;
}