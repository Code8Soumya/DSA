// gfg


// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution {
//   public:
  
//     struct mydata{     
//         int start;        
//         int end; 
//     };
    
//     bool static comp(mydata val1, mydata val2){
//         return val1.end < val2.end;
//     }
    
//     int maxMeetings(int n, int start[], int end[]) {
//         if(n==1) return 1;
//         vector<mydata> v;
//         for(int i=0;i<n;i++){
//             v.push_back({start[i], end[i]});
//         }
//         sort(v.begin(), v.end(), comp);
//         int meet = 1;
//         int last_end_time = v[0].end;
//         for(int i=1;i<n;i++){
//             if(v[i].start > last_end_time){
//                 meet++;
//                 last_end_time = v[i].end;
//             }   
//         }
//         return meet;
//     }
    
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int start[n], end[n];
//         for (int i = 0; i < n; i++)
//             cin >> start[i];

//         for (int i = 0; i < n; i++)
//             cin >> end[i];

//         Solution ob;
//         int ans = ob.maxMeetings(n, start, end);
//         cout << ans << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends