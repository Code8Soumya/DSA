// https://leetcode.com/problems/climbing-stairs/


// memoization

// class Solution {
// public:
//     int rec(int idx, vector<int> &dp){
//         if(idx == 0) return 1;
//         if(idx == 1) return 1;
//         if(dp[idx] != -1) return dp[idx];
//         return dp[idx] = rec(idx-1, dp) + rec(idx-2, dp);
//     }
//     int climbStairs(int n) {
//         vector<int> dp(n+1, -1);
//         return rec(n, dp);
//     }
// };

