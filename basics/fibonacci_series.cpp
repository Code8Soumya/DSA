#include<iostream>
using namespace std;
int main(){
    int n,a=1,b=1,term;
    cout<<"Give your number: ";
    cin>>n;
    for (int i=0;i<n;i++){
        cout<<a<<endl;
        term=a+b;
        a=b;
        b=term;
    }
    return 0;
}