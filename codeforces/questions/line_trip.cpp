// https://codeforces.com/problemset/problem/1901/A

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         vector<int> a(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }
//         int max_diff = 0;
//         for(int i=1;i<=n-1;i++){
//             max_diff = max(max_diff, a[i]-a[i-1]);
//         }
//         max_diff = max(max_diff, a[0]-0);
//         max_diff = max(max_diff, (x-a[n-1])*2);
//         cout<<max_diff<<endl;
//     }
//     return 0;
// }
