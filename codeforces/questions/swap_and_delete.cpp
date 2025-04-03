// https://codeforces.com/problemset/problem/1913/B

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int n = s.size();
//         int c0 = 0;
//         int c1 = 0;
//         for(int i=0 ; i<n ; i++){
//             if(s[i] == '0') c0++;
//             else c1++;
//         }
//         int t_size = 0;
//         for(int i=0 ; i<n ; i++){
//             if(s[i] == '0'){
//                 if(c1 > 0){
//                     c1--;
//                 }
//                 else break;
//             }
//             else{
//                 if(c0 > 0){
//                     c0--;
//                 }
//                 else break;
//             }
//             t_size++;
//         }
//         cout<<abs(n - t_size)<<endl;
//     }
//     return 0;
// }