#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4,5};
    v.push_back(v1);
    v.push_back(v2);
    cout<<v[0][1]<<endl;
    cout<<v[1][2]<<endl;

    // 2d vector
    int m = 3; // rows
    int n = 4; // columns
    vector<vector<int>> p(m,vector<int>(n));
    return 0;
}