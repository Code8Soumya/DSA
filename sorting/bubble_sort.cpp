#include<bits/stdc++.h>
using namespace std;

void bs(vector<int> &vec){
    if(vec.size() == 1){
        return;
    }
    else{
        int temp;
        for(auto i=vec.begin() ; i!=vec.end() ; i++){
            for(auto j=i+1 ; j!=vec.end() ; j++){
                if(*i > *j) {
                    temp = *j;
                    *j = *i;
                    *i = temp;
                }
            }
        }
    }

}

int main(){
    vector<int> v = {9,8,5,3,2,5,7,4,3,1,5,4,6,8,7,3};
    bs(v);
    for(auto i=v.begin() ; i!=v.end() ; i++){
        cout<<*i<<" ";
    }
    return 0;
}