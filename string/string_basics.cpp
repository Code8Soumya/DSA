#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "abcdefg";
    string p = "xyz";
    // cout<<s<<endl;
    // cout<<(int)s[7]<<endl;
    // string s1;
    // cin>>s1;
    // cout<<s1<<endl;
    // string s2;
    // getline(cin,s2);
    // cout<<s2;
    cout<<s.size()<<endl;
    cout<<s<<endl;
    s.push_back('z');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    cout<<s+p<<endl;
    cout<<p+s<<endl;
    reverse(s.begin(), s.end());
    reverse(p.begin()+1, p.begin()+3);
    cout<<s<<endl;
    cout<<p<<endl;
    return 0;
}