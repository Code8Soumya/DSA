// recursion + memoization 

// solution - 1
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

// int countPartitions(vector<int>& arr, int d) {
//     int total_sum = accumulate(arr.begin(), arr.end(), 0);
//     if((total_sum - d) < 0 || (total_sum - d) % 2 != 0) return 0;
//     int target = (total_sum - d) / 2;
//     int n = arr.size();
//     vector<vector<int>> memo(n, vector<int>(target+1, -1));
//     return rec(n-1, target, arr, memo);
// }

// solution - 2
// int rec(int idx, int target, vector<int> &arr, vector<vector<int>> &memo){
//     if(idx<0){
//         if(target == 0) return 1;
//         return 0;
//     }
//     if(memo[idx][target] != -1) return memo[idx][target];
//     int not_take = rec(idx-1, target, arr, memo);
//     int take = 0;
//     if(arr[idx] <= target) take = rec(idx-1, target-arr[idx], arr, memo);
//     return memo[idx][target] = (not_take + take);
// }

// int countPartitions(vector<int>& arr, int d) {
//     int total_sum = accumulate(arr.begin(), arr.end(), 0);
//     if((total_sum - d) < 0 || (total_sum - d) % 2 != 0) return 0;
//     int target = (total_sum - d) / 2;
//     int n = arr.size();
//     vector<vector<int>> memo(n, vector<int>(target+1, -1));
//     return rec(n-1, target, arr, memo);
// }