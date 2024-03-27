#include<bits/stdc++.h>
using namespace std;

bool reverse(string &str, int l,int n){
    if(l>n/2) return true;
    if(str[l] != str[n-l-1]) return false;
    reverse(str, l+1, n);
}
int main(){
    string str;
    int l, n;
    cout<<"Give your string: ";
    cin>>str;
    n = str.size();
    l = 0;
    if(reverse(str, l, n)) cout<<"Given string "<<str<<" is pallindrome.";
    else cout<<"Given string "<<str<<" is not pallindrome.";
    return 0;
}