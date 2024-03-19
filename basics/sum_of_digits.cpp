#include<iostream>
using namespace std;
int main(){
    int n,a,sum=0;
    cout<<"Give your integer: ";
    cin>>n;
    a = n;
    while (n>0){
        sum += n%10;
        n/=10;
    }
    if(a==0){
        cout<<"The sum of the digits in integer "<<a<<" is "<<"1"<<" .";
    }
    else{
        cout<<"The sum of the digits in integer "<<a<<" is "<<sum<<" .";
    }
    return 0;
}