#include<bits/stdc++.h>
using namespace std;

vector<int> search(string &txt, string &pat){
    int k = pat.size();
    vector<int> lps(k, 0);
    for(int i=1,len=0 ; i<k ; ){
        if(pat[i] == pat[len]){
            lps[i++] = ++len;
        }
        else if(len) len = lps[len-1];
        else lps[i++] = 0;
    }
    int n = txt.size();
    vector<int> ans;
    for(int i=0,j=0 ; i<n ; ){
        if(txt[i] == pat[j]) {
            i++,j++;
            if(j==k){
                ans.push_back(i-j);
                j = lps[j-1];
            }
        }
        else if(j) j = lps[j-1];
        else i++;
    }
    return ans;
}

int main(){
    string txt = "I love camping";
    string pat = "love";
    vector<int> ans = search(txt, pat);
    for(auto it : ans) cout<<it<<' ';
    return 0;
}