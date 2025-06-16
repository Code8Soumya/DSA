// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/


// space optimization

// class Solution {
//     public:
//         int maxProfit(int k, vector<int>& prices) {
//             int n = prices.size();
//             vector<vector<int>> dp(2, vector<int>(k+1, 0));
//             vector<vector<int>> temp(2, vector<int>(k+1, 0));
//             for(int idx=n-1 ; idx>=0 ; idx--){
//                 for(int buy=0 ; buy<=1 ; buy++){
//                     for(int trans=0 ; trans<k ; trans++){
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
//             int maxi;
//             for(auto it : dp[1]) maxi = max(maxi, it);
//             return maxi;
//         }
// };