#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    print(i+1, n);
    cout<<i<<endl;
}
int main(){
    int n;
    int i=1;
    cout<<"Give the number: ";
    cin>>n;
    print(i, n);
    return 0;
}