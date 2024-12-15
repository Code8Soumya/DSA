// recursion + memoization

// int rec(vector<vector<int>> &arr, int idx, int last, vector<vector<int>> &memo){
//     int maxi = 0;
//     if(idx==0){
//         for(int i=0 ; i<=2 ; i++){
//             if(i!=last) maxi = max(maxi, arr[0][i]);
//         }
//         return maxi;
//     }
//     if(memo[idx][last]!=-1) return memo[idx][last];
//     for(int i=0 ; i<=2 ; i++){
//         if(i!=last){
//             maxi = max(maxi, arr[idx][i] + rec(arr, idx-1, i, memo));
//         } 
//     }
//     return memo[idx][last] = maxi;
// }
// int maximumPoints(vector<vector<int>>& arr, int n) {
//     vector<vector<int>> memo(n, vector<int>(4, -1));
//     return rec(arr, n-1, 3, memo);
// }


// tabulation

// int maximumPoints(vector<vector<int>>& arr, int n) {
//     vector<vector<int>> memo(n, vector<int>(4, 0));
//     memo[0][0] = max(arr[0][1], arr[0][2]);
//     memo[0][1] = max(arr[0][0], arr[0][2]);
//     memo[0][2] = max(arr[0][0], arr[0][1]);
//     memo[0][3] = max(arr[0][0], max(arr[0][1], arr[0][2]));
    
//     for(int day=1 ; day<n ; day++){
//         for(int last=0 ; last<=3 ; last++){
//             for(int task=0 ; task<=2 ; task++){
//                 if(task==last) continue;
//                 memo[day][last] = max(memo[day][last], arr[day][task] + memo[day-1][task]);
//             }
//         }
//     }
//     return memo[n-1][3];
// }


// tabulation + space optimization

// int maximumPoints(vector<vector<int>>& arr, int n) {
//     vector<int> prev(4, 0);
//     prev[0] = max(arr[0][1], arr[0][2]);
//     prev[1] = max(arr[0][0], arr[0][2]);
//     prev[2] = max(arr[0][0], arr[0][1]);
//     prev[3] = max(arr[0][0], max(arr[0][1], arr[0][2]));
//     for(int day=1 ; day<n ; day++){
//         vector<int> temp(4, 0);
//         for(int last=0 ; last<=3 ; last++){
//             for(int task=0 ; task<=2 ; task++){
//                 if(task==last) continue;
//                 temp[last] = max(temp[last], arr[day][task] + prev[task]);
//             }
//         }
//         prev = temp;
//     }
//     return prev[3];
// }


