#include<iostream>
using namespace std;
int main(){
    int* p = NULL;
    int* q = '\0';
    int* r = 0;
    cout<<&p<<p<<*p;
    cout<<&q<<q<<*q;
    cout<<&r<<r<<*r;
    char ch = '\0';
    cout<<(int)ch;
    return 0;
}