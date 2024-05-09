#include<iostream>
using namespace std;
int main(){
    int n, a;
    cout<<"Give your number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<i;
    cout<<endl;
    n-=1;
    for(int i=1;i<=n;i++){
        a=1;
        for(int j=1;j<=n+1-i;j++) {
            cout<<a;;
            a++;
        }
        for(int k=1;k<=2*i-1;k++) {
            cout<<" ";
            a++;
        }
        for(int l=a;l<=2*n+1;l++) cout<<l;
        cout<<endl;
    }
    return 0;
}