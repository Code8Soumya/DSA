// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/


// memoization

// class Solution {
//     public:
//         int rec(int idx, int buy, int trans, int n, vector<int> &prices, vector<vector<vector<int>>> &dp){
//             if(trans == 2) return 0;
//             if(idx == n) return 0;
//             if(dp[idx][buy][trans] != -1) return dp[idx][buy][trans];
//             int profit;
//             if(buy){
//                 profit = max(
//                     -prices[idx] + rec(idx+1, 0, trans, n, prices, dp),
//                     rec(idx+1, 1, trans, n, prices, dp)
//                     );
//             }
//             else{
//                 profit = max(
//                     prices[idx] + rec(idx+1, 1, trans+1, n, prices, dp),
//                     rec(idx+1, 0, trans, n, prices, dp)
//                     );
//             }
//             return dp[idx][buy][trans] = profit;
//         }
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(2, -1)));
//             return rec(0, 1, 0, n, prices, dp);
//         }
// };


// tabulation 

// class Solution {
//     public:
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
//             for(int idx=0 ; idx<n ; idx++){
//                 for(int buy=0 ; buy<=1 ; buy++){
//                     dp[idx][buy][2] = 0;
//                 }
//             }
//             for(int buy=0 ; buy<=1 ; buy++){
//                 for(int trans=0 ; trans<=2 ; trans++){
//                     dp[n][buy][trans] = 0;
//                 }
//             }
//             for(int idx=n-1 ; idx>=0 ; idx--){
//                 for(int buy=0 ; buy<=1 ; buy++){
//                     for(int trans=0 ; trans<=1 ; trans++){
//                         int profit;
//                         if(buy){
//                             profit = max(-prices[idx] + dp[idx+1][0][trans], dp[idx+1][1][trans]);
//                         }
//                         else{
//                             profit = max(prices[idx] + dp[idx+1][1][trans+1], dp[idx+1][0][trans]);
//                         }
//                         dp[idx][buy][trans] = profit;
//                     }
//                 }
//             }
//             return max(dp[0][1][0], dp[0][1][1]);
//         }
// };


// space optimization

// class Solution {
//     public:
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             vector<vector<int>> dp(2, vector<int>(3, 0));
//             vector<vector<int>> temp(2, vector<int>(3, 0));
//             for(int idx=n-1 ; idx>=0 ; idx--){
//                 for(int buy=0 ; buy<=1 ; buy++){
//                     for(int trans=0 ; trans<=1 ; trans++){
//                         int profit;
//                         if(buy){
//                             profit = max(-prices[idx] + dp[0][trans], dp[1][trans]);
//                         }
//                         else{
//                             profit = max(prices[idx] + dp[1][trans+1], dp[0][trans]);
//                         }
//                         temp[buy][trans] = profit;
//                     }
//                 }
//                 dp = temp;
//             }
//             return max(dp[1][0], dp[1][1]);
//         }
// };