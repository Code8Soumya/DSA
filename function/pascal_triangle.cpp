#include<iostream>
using namespace std;

int fact(int n){
    int val=1;
    if(n>=1){
        for(int i=1;i<=n;i++) val *= i;
    }
    return val;
}

int ncr(int n, int r){
    int val;
    val = fact(n)/(fact(n-r)*fact(r));
    return val;
}

int main(){
    int n;
    cout<<"Give your input: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++) cout<<" ";
        for(int k=0;k<=i;k++) cout<<ncr(i,k)<<" ";
        cout<<endl;
    }
    return 0;
}