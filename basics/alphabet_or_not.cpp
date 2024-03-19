#include<iostream>
using namespace std;
int main(){
    char ch;
    int n;
    cout<<"Give your character: ";
    cin>>ch;
    n = (int)ch;
    if ((n>=65 && n<=90) || (n>=97 && n<= 122)){
        cout<<"You character is an alphabet.";
    }
    else{
        cout<<"Your character is not an alphabet.";
    }
    return 0;
}