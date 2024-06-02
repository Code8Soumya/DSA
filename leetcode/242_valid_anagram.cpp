#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    int arr[26] = {0};
    for(int i=0;s[i]!='\0';i++){
        arr[s[i] - 97]++;
    }
    for(int i=0;t[i]!='\0';i++){
        arr[s[i] - 97]--;
    }
    for(int i=0;i<26;i++){
        if(arr[i] != 0) return false;
    }
    return true;
}

int main(){
    string s = "rat";
    string t = "car";
    int arr[26] = {0};
    for(int i=0;s[i]!='\0';i++) arr[s[i] - 97]++;
    for(int i=0;i<26;i++) cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;t[i]!='\0';i++) arr[t[i] - 97]--;
    for(int i=0;i<26;i++) cout<<arr[i]<<" ";
    cout<<endl;
    for(int i=0;i<26;i++){
        if(arr[i] != 0) cout<<false;
    }
    return 0;
}



// leetcode

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         int arr[26] = {0};
//         for(int i=0;s[i]!='\0';i++){
//             arr[s[i] - 97]++;
//         }
//         for(int i=0;t[i]!='\0';i++){
//             arr[t[i] - 97]--;
//         }
//         for(int i=0;i<26;i++){
//             if(arr[i] != 0) return false;
//         }
//         return true;
//     }
// };

