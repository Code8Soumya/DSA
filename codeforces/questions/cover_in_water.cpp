// https://codeforces.com/problemset/problem/1900/A

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int total_empty_bucket = 0;
//         int consecutive_bucket = 0;
//         for(int i=0;i<n;i++){
//             if(s[i] == '.'){
//                 total_empty_bucket++;
//                 consecutive_bucket++;
//                 if(consecutive_bucket == 3) break;
//             }
//             else{
//                 consecutive_bucket = 0;
//             }
//         }
//         if(consecutive_bucket == 3){
//             cout<<2<<endl;
//         }
//         else{
//             cout<<total_empty_bucket<<endl;
//         }
//     }
//     return 0;
// }