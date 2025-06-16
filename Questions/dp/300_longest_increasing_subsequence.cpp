// https://leetcode.com/problems/longest-increasing-subsequence/


// memoization

// class Solution {
// public:
//     int rec(int idx, int prev_idx, int n, vector<int> &nums, vector<vector<int>> &dp){
//         if(idx == n) return 0;
//         if(dp[idx][prev_idx+1] != -1) return dp[idx][prev_idx+1];
//         int not_pick = rec(idx+1, prev_idx, n, nums, dp);
//         int pick = INT_MIN;
//         if(prev_idx<0 || nums[idx] > nums[prev_idx]){
//             pick = 1 + rec(idx+1, idx, n, nums, dp);
//         }
//         return dp[idx][prev_idx+1] = max(not_pick, pick);
//     }
//     int lengthOfLIS(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> dp(n, vector<int>(n+1, -1));
//         return rec(0, -1, n, nums, dp);
//     }
// };

