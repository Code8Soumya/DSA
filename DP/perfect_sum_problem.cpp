// recursion + memoization

// int rec(int idx, int target, vector<int> &arr, vector<vector<int>> &memo){
//     if(idx==0){
//         if(target == 0 && arr[0] == 0) return 2;
//         if(target == 0 || target == arr[0]) return 1;
//         return 0;
//     }
//     if(memo[idx][target] != -1) return memo[idx][target];
//     int not_take = rec(idx-1, target, arr, memo);
//     int take = 0;
//     if(arr[idx] <= target) take = rec(idx-1, target-arr[idx], arr, memo);
//     return memo[idx][target] = (not_take + take);
// }
// int perfectSum(vector<int>& arr, int target) {
//     int n = arr.size();
//     vector<vector<int>> memo(n, vector<int>(target+1, -1));
//     return rec(n-1, target, arr, memo);
// }


// tabulation

// int perfectSum(vector<int>& arr, int target) {
//     int n = arr.size();
//     vector<vector<int>> memo(n, vector<int>(target+1, 0));
    
//     if(arr[0] == 0) memo[0][0] = 2;
//     else memo[0][0] = 1;
    
//     if(arr[0] != 0 && arr[0] <= target) memo[0][arr[0]] = 1;
        
//     for(int idx=1 ; idx<n ; idx++){
//         for(int t=0 ; t<=target ; t++){
//             int not_take = memo[idx-1][t];
//             int take = 0;
//             if(arr[idx] <= t) take = memo[idx-1][t-arr[idx]];
//             memo[idx][t] = (not_take + take);
//         }
//     }
    
//     return memo[n-1][target];
// }