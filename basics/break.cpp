#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"Give your number: ";
    cin>>n;
    for (int i=2;i<n;i++){
        if (n%i==0){
            cout<<"Given number is not a prime.";
            flag=false; 
            break;
        }
    }
    if (n==1) cout<<"Given number is neither a prime nor composite.";
    else if (flag) cout<<"Given number is a prime.";   
    return 0;
}

// continue;
// break;