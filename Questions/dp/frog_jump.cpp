// https://www.geeksforgeeks.org/problems/geek-jump/1


// memoization

// class Solution {
// public:
//     int rec(int i, vector<int> &height, vector<int> &dp){
//         if(i == 0) return 0;
//         if(dp[i] != -1) return dp[i];
//         int one_jump = abs(height[i-1]-height[i]) + rec(i-1, height, dp);
//         int two_jump = INT_MAX;
//         if(i >= 2){
//             two_jump = abs(height[i-2]-height[i]) + rec(i-2, height, dp);
//         }
//         return dp[i] = min(one_jump, two_jump);
//     }
//     int minCost(vector<int>& height) {
//         int n = height.size();
//         vector<int> dp(n, -1);
//         return rec(n-1, height, dp);
//     }
// };


// tabulation

// class Solution {
// public:
//     int minCost(vector<int> &height) {
//         int n = height.size();
//         vector<int> dp(n, -1);
//         dp[0] = 0;
//         dp[1] = abs(height[1]  - height[0]);
//         for(int i=2 ; i<n ; i++){
//             int one_jump = abs(height[i-1]-height[i]) + dp[i-1];
//             int two_jump = abs(height[i-2]-height[i]) + dp[i-2];
//             dp[i] = min(one_jump, two_jump);
//         }
//         return dp[n-1];
//     }
// };


// space optimization

// class Solution {
// public:
//     int minCost(vector<int> &height) {
//         int n = height.size();
//         if(n == 1) return 0;
//         int prev2 = 0;
//         int prev1 = abs(height[1]-height[0]);
//         for(int i=2 ; i<n ; i++){
//             int one_jump = abs(height[i-1]-height[i]) + prev1;
//             int two_jump = abs(height[i-2]-height[i]) + prev2;
//             prev2 = prev1;
//             prev1 = min(one_jump, two_jump);
//         }
//         return prev1;
//     }
// };

