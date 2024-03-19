#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Give your float: ";
    cin>>x;
    float y = (float)(x - (int)x);
    if (y<0)y+=1;
    cout<<"Your fractional part is : "<<y;
    return 0;
}
