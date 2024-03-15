#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter a number: "<<endl;
    cin>>y;
    for(int x=0;x<=y;x++){
        if(x % 5 == 0 && x % 2 == 0){
            cout<<"fizzbuzz"<<endl;
        }
        else if(x % 5 == 0){
            cout<<"buzz"<<endl;
        }
        else if(x % 3 == 0){
            cout<<"fizz"<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}