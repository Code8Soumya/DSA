#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    cout<<"Hello"<<endl;
    print(i+1, n);
}
int main(){
    int n;
    int i=1;
    cout<<"Give the number of times you want to print Hello: ";
    cin>>n;
    print(i, n);
    return 0;
}