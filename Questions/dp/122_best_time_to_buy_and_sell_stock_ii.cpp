// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/


// memoization

// class Solution {
//     public:
//         int rec(int idx, int buy, int n, vector<int> &prices, vector<vector<int>> &dp){
//             if(idx == n) return 0;
//             if(dp[idx][buy] != -1) return dp[idx][buy];
//             int profit = 0;
//             if(buy){
//                 profit = max(
//                     -prices[idx] + rec(idx+1, 0, n, prices, dp),
//                     rec(idx+1, 1, n, prices, dp)
//                     );
//             }
//             else{
//                 profit = max(
//                     prices[idx] + rec(idx+1, 1, n, prices, dp),
//                     rec(idx+1, 0, n, prices, dp)
//                     );
//             }
//             return dp[idx][buy] = profit;
//         }
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             vector<vector<int>> dp(n, vector<int>(2, -1));
//             return rec(0, 1, n, prices, dp);
//         }
// };


// tabulation

// class Solution {
//     public:
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             vector<vector<int>> dp(n+1, vector<int>(2, -1));
//             dp[n][0] = dp[n][1] = 0;
//             for(int idx=n-1 ; idx>=0 ; idx--){
//                 for(int buy=0 ; buy<=1 ; buy++){
//                     int profit;
//                     if(buy){
//                         profit = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
//                     }
//                     else{
//                         profit = max(prices[idx] + dp[idx+1][1], dp[idx+1][0]);
//                     }
//                     dp[idx][buy] = profit;
//                 }
//             }
//             return dp[0][1];
//         }
// };


// space optimization

// class Solution {
//     public:
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             vector<int> dp(2, 0);
//             vector<int> temp(2);
//             for(int idx=n-1 ; idx>=0 ; idx--){
//                 for(int buy=0 ; buy<=1 ; buy++){
//                     int profit;
//                     if(buy){
//                         profit = max(-prices[idx] + dp[0], dp[1]);
//                     }
//                     else{
//                         profit = max(prices[idx] + dp[1], dp[0]);
//                     }
//                     temp[buy] = profit;
//                 }
//                 dp = temp;
//             }
//             return dp[1];
//         }
// };