// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


// class Solution {
//     public:
//         int maxProfit(vector<int>& prices) {
//             int n = prices.size();
//             int till_min = prices[0];
//             int max_profit = 0;
//             int profit;
//             for(int i=1;i<n;i++){
//                 profit = prices[i] - till_min;
//                 if(profit > max_profit) max_profit = profit;
//                 else if(prices[i] < till_min) till_min = prices[i];
//             }
//             return max_profit;
//         }
// };