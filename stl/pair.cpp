#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p = {1,2};
    cout<<p.first<<endl;
    pair<int,pair<int, int>> q = {1,{2,3}};
    cout<<q.second.second<<endl;
    pair<int,int> arr[] = {{1,2},{3,4}};
    cout<<arr[1].second<<endl;
    return 0;
}