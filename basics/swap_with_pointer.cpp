#include<iostream>
using namespace std;

void swap_ptr(int* p, int* q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;

}
int main(){
    int a,b;
    cout<<"Give your integer a and b : ";
    cin>>a>>b;
    cout<<"Your integer a and b are "<<a<<" and "<<b<<endl;
    cout<<"Your integer a and b are at "<<&a<<" and "<<&b<<endl;
    swap_ptr(&a, &b);
    cout<<"Your integer a and b are "<<a<<" and "<<b<<endl;
    cout<<"Your integer a and b are at "<<&a<<" and "<<&b<<endl;
    return 0;
}