#include<iostream>
using namespace std;

int main(){
    int n, curr;
    cout<<"Give your input: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        curr = 1;
        for(int j=0;j<=n-i-1;j++) cout<<" ";
        for(int k=0;k<=i;k++) {
            cout<<curr<<" ";
            curr = curr*(i-k)/(k+1);
        }
        cout<<endl;
    }
    return 0;
}