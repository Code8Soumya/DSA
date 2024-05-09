#include<iostream>
using namespace std;
int main(){
    int n, a, b, x;
    cout<<"Give your number: ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i>n) a = 2*n-i;
            else a = i;
            if(j>n) b = 2*n-j;
            else b = j;
            x = min(a,b);
            cout<<n+1-x;
        }
        cout<<endl;
    }
    return 0;
}