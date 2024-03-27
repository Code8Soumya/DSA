#include<bits/stdc++.h>
using namespace std;

void is(vector<int> &v){
    if(v.size()==1) return;
    for(int i=0;i<v.size();i++){
        int j=i;
        while(v[j] < v[j-1] && j>0){
            int temp = v[j];
            v[j] = v[j-1];
            v[j-1] = temp;
            j--;
        }
    }
}
int main(){
    vector<int> v={2,1,6,3,7,9,5,4,2,1,4,6,8,9,8,6,4,2,5,7,9,7,54,2,4,7,89,98,766,6};
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    cout<<endl;
    is(v);
    for(auto it=v.begin();it!=v.end();it++) cout<<*it<<" ";
    return 0;
}