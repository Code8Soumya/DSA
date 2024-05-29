#include<iostream>
using namespace std;
int main(){
    char c[5] = {'a','b','c','d','e'};
    for(int i=0;c[i]!='\0';i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<c<<endl;
    cout<<c[5]<<" "<<(int)c[5];
    return 0;
}