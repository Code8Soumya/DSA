#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give your number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<" ";
        for(int k=64+i;k>=65;k--) cout<<(char)k;
        for(int l=66;l<=64+i;l++) cout<<(char)l;
        cout<<endl;
    }
    return 0;
}