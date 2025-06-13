// https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1


// memoization

// bool rec(int idx, int target, vector<vector<int>> &memo, vector<int> &arr){
//     if(target == 0) return true;
//     if(idx==0) return (arr[0]==target);
//     if(memo[idx][target] != -1) return memo[idx][target];
//     bool not_take = rec(idx-1, target, memo, arr);
//     bool take = 0;
//     if(target-arr[idx] >= 0){
//         take = rec(idx-1, target-arr[idx], memo, arr);
//     }
//     return memo[idx][target] = (not_take || take);
// }
// bool isSubsetSum(vector<int>& arr, int target) {
//     int n = arr.size();
//     vector<vector<int>> memo(n, vector<int>(target+1, -1));
//     return rec(n-1, target, memo, arr);
// }


// tabulation

// bool isSubsetSum(vector<int>& arr, int target) {
//     int n = arr.size();
//     vector<vector<bool>> dp(n, vector<bool>(target+1, false));
//     for(int i=0 ; i<n ; i++) dp[i][0] = true;
//     dp[0][arr[0]] = true;
//     for(int i=1 ; i<n ; i++){
//         for(int j=1 ; j<=target ; j++){
//             bool not_take = dp[i-1][j];
//             bool take = false;
//             if(j-arr[i] >= 0){
//                 take = dp[i-1][j-arr[i]];
//             }
//             dp[i][j] = (take || not_take);
//         }
//     }
//     return dp[n-1][target];
// }


// space optimization

// bool isSubsetSum(vector<int>& arr, int target) {
//     int n = arr.size();
//     vector<bool> prev(target+1, false);
//     prev[0] = prev[arr[0]] = true;
//     for(int i=1 ; i<n ; i++){
//         vector<bool> curr(target+1, false);
//         curr[0] = true;
//         for(int j=1 ; j<=target ; j++){
//             bool not_take = prev[j];
//             bool take = false;
//             if(j-arr[i] >= 0){
//                 take = prev[j-arr[i]];
//             }
//             curr[j] = (take || not_take);
//         }
//         prev = curr;
//     }
//     return prev[target];
// }

