#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give your number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=abs(n-i);j<n;j++) cout<<"*";
        cout<<endl;
    }
    return 0;
}