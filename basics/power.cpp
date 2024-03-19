#include<iostream>
using namespace std;
int main(){
    int n,a,pow;
    cout<<"Give your integer and power: ";
    cin>>n>>pow;
    a=n;
    for(int i=1;i<pow;i++){
        n *= a;
    }
    cout<<"Integer "<<a<<" to the power "<<pow<<" is "<<n<<" .";
    return 0;
}