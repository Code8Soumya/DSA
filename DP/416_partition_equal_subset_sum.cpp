// https://leetcode.com/problems/partition-equal-subset-sum/


// memoization

// class Solution {
// public:
//     bool rec(int idx, int target, vector<vector<int>> &memo, vector<int> &arr){
//         if(target == 0) return true;
//         if(idx==0) return (arr[0]==target);
//         if(memo[idx][target] != -1) return memo[idx][target];
//         bool not_take = rec(idx-1, target, memo, arr);
//         bool take = 0;
//         if(target-arr[idx] >= 0){
//             take = rec(idx-1, target-arr[idx], memo, arr);
//         }
//         return memo[idx][target] = (not_take || take);
//     }
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int total_sum = accumulate(nums.begin(), nums.end(), 0);
//         if(total_sum % 2 == 0) {
//             vector<vector<int>> memo(n, vector<int>(total_sum/2 + 1, -1));
//             return rec(n-1, total_sum/2, memo, nums);
//         }
//         return false;
//     }
// };


// tabulation

// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int total_sum = accumulate(nums.begin(), nums.end(), 0);
//         if(total_sum % 2 != 0) return false;
//         int target = total_sum/2;
//         vector<vector<bool>> memo(n, vector<bool>(total_sum, false));
//         for(int i=0 ; i<n ; i++) memo[i][0] = true;
//         memo[0][nums[0]] = true;
//         for(int i=1 ; i<n ; i++){
//             for(int j=1 ; j<=target ; j++){
//                 int not_take = memo[i-1][j];
//                 int take = 0;
//                 if(nums[i] <= j){
//                     take = memo[i-1][j-nums[i]];
//                 }
//                 memo[i][j] = (take || not_take);
//             }
//         }
//         return memo[n-1][target]; 
//     }
// };


// space optimization

// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int n = nums.size();
//         int total_sum = accumulate(nums.begin(), nums.end(), 0);
//         if(total_sum % 2 != 0) return false;
//         int target = total_sum/2;
//         vector<bool> memo(total_sum, false);
//         memo[0] = true;
//         memo[nums[0]] = true;
//         vector<bool> temp(total_sum, false);
//         for(int i=1 ; i<n ; i++){
//             for(int j=1 ; j<=target ; j++){
//                 int not_take = memo[j];
//                 int take = 0;
//                 if(nums[i] <= j){
//                     take = memo[j-nums[i]];
//                 }
//                 temp[j] = (take || not_take);
//             }
//             memo = temp;
//         }
//         return memo[target]; 
//     }
// };