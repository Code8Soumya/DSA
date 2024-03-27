#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){ 
    int n;
    cout<<"Give your number: ";
    cin>>n;
    cout<<"The nth fibonacci number is "<<fibo(n)<<".";
    return 0;
}