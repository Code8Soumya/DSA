#include<iostream>
using namespace std;
int main(){
    int n,a,digits=0,reversed=0;
    cout<<"Give your integer to be reversed: ";
    cin>>n;
    a = n;
    while (n>0){
        reversed *= 10;
        reversed += n%10;
        n /= 10;
    }
    if(a==0){
        cout<<"The reverse of the integer "<<a<<" is "<<0<<" .";
    }
    else{
        cout<<"The reverse of the integer "<<a<<" is "<<reversed<<" .";
    }
    return 0;
}