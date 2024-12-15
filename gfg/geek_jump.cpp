// gfg


// class Solution {
//   public:
//     // Memoization(Top-Bottom)
//     // int rec(int idx, vector<int> &memo, vector<int> &height){
//     //     if(idx == 0) return 0;
//     //     if(memo[idx] != -1) return memo[idx];
//     //     int left = rec(idx-1, memo, height) + abs(height[idx] - height[idx-1]);
//     //     int right = INT_MAX;
//     //     if(idx > 1) right = rec(idx-2, memo, height) + abs(height[idx] - height[idx-2]);
//     //     return memo[idx] = min(left, right);
//     // }
//     int minimumEnergy(vector<int>& height, int n) {
//         // vector<int> memo(n,-1);
//         // return rec(n-1, memo, height);
        
        
//         // Tabulation(Bottom-Top)
//         // vector<int> dp(n, -1);
//         // dp[0] = 0;
//         // for(int i=1 ; i<n ; i++){
//         //     int fs = dp[i-1] + abs(height[i] - height[i-1]);
//         //     int ss = INT_MAX;
//         //     if(i > 1) ss = dp[i-2] + abs(height[i] - height[i-2]);
//         //     dp[i] = min(fs, ss);
//         // }
//         // return dp[n-1];
        
        
//         // Space-optimization
//         int prev2 = 0;
//         int prev1 = 0;
//         int curr;
//         for(int i=1 ; i<n ; i++){
//             int fs = prev1 + abs(height[i] - height[i-1]);
//             int ss = INT_MAX;
//             if(i>1) ss = prev2 + abs(height[i] - height[i-2]);
//             curr = min(fs, ss);
//             prev2 = prev1;
//             prev1 = curr;
//         }
//         return prev1;
//     }
// };
