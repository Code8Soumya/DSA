#include<bits/stdc++.h>
using namespace std;

int main(){
    // {2,6,5,6,-4,-2,6,-9,4,-8,4,1,-7,0,-3}
    vector<int> v = {-2,6,-5,6,-4,2,6,9,4,-8,4,1,7,0,3}; // if does not have a first negative add 0
    vector<int> out;
    int n = v.size();
    int window_size = 3;
    int p = n;
    for(int i=0;i<n;i++){
        if(v[i] < 0){
            p = i;
            break;
        }
    }
    int i = 0;
    while(i <= (n-window_size)){
        if(p < i){
            for(int j=i;j<(i+window_size);j++){
                if(v[j] < 0){
                    p = j;
                    break;
                }
            }
        }
        if(p >= i && p < i+window_size) out.push_back(v[p]);
        else out.push_back(0);
        i++;
    }
    cout<<"expected output size : "<<n-window_size+1<<endl;
    cout<<"output size : "<<out.size()<<endl;
    for(auto it=out.begin();it!=out.end();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}