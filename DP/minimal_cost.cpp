// recursion + memoization

// class Solution {
// public:
//     int rec(int i, int k, vector<int> &height, vector<int> &dp){
//         if(i==0) return 0;
//         if(dp[i] != -1) return dp[i];
//         int jump = INT_MAX;
//         for(int j=1 ; j<=k ; j++){
//             if(i-j < 0) break;
//             jump = min(jump, abs(height[i-j]-height[i]) + rec(i-j, k, height, dp));
//         }
//         return dp[i] = jump;
//     }
//     int minimizeCost(int k, vector<int> &height) {
//         int n = height.size();
//         vector<int> dp(n, -1);
//         return rec(n-1, k, height, dp);
//     }
// };


//  tabulation

// class Solution {
// public:
//     int minimizeCost(int k, vector<int> &height) {
//         int n = height.size();
//         vector<int> dp(n, INT_MAX);
//         dp[0] = 0;
//         for(int i=0 ; i<n ; i++){
//             for(int j=1 ; j<=k ; j++){
//                 if(i-j < 0) break;
//                 dp[i] = min(dp[i], abs(height[i-j]-height[i]) + dp[i-j]);
//             }
//         }
//         return dp[n-1];
//     }
// };