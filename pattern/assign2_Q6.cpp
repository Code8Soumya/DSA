#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Give your number: ";
    cin>>n;
    m = 2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++) cout<<" ";
        cout<<"*";
        for(int k=1;k<=m;k++) cout<<" ";
        m-=2;
        cout<<"*";
        cout<<endl;
    }
    for(int l=1;l<=n;l++) cout<<" ";
    cout<<"*";
    return 0;
}