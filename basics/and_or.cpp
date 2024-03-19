#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give your nymber: ";
    cin>>n;
    if (n>=100 && n<=999){
        cout<<"Your number is a three digit number.";
    }
    else{
        cout<<"Your number is not three digit.";
    }
    return 0;
}


// && = and
// || = or