// https://leetcode.com/problems/coin-change/


// memoization

// class Solution {
// public:
//     int rec(int idx, int amount, vector<int> &coins, vector<vector<int>> &dp){
//         if(idx == 0){
//             if(amount % coins[0] == 0) return amount / coins[0];
//             else return 1e9;
//         }
//         if(dp[idx][amount] != -1) return dp[idx][amount];
//         int not_take = rec(idx-1, amount, coins, dp);
//         int take = INT_MAX;
//         if(coins[idx] <= amount){
//             take = 1 + rec(idx, amount - coins[idx], coins, dp);
//         }
//         return dp[idx][amount] = min(not_take, take);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<vector<int>> dp(n, vector<int>(amount+1, -1));
//         int coin = rec(n-1, amount, coins, dp);
//         if(coin >= 1e9) return -1;
//         return coin;
//     }
// };

// class Solution {
// public:
//     int rec(int idx, int amount, vector<int> &coins, vector<vector<int>> &dp){
//         if(amount == 0) return 0;
//         if(idx < 0) return 1e9;
//         if(dp[idx][amount] != -1) return dp[idx][amount];
//         int not_take = rec(idx-1, amount, coins, dp);
//         int take = INT_MAX;
//         if(coins[idx] <= amount){
//             take = 1 + rec(idx, amount - coins[idx], coins, dp);
//         }
//         return dp[idx][amount] = min(not_take, take);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<vector<int>> dp(n, vector<int>(amount+1, -1));
//         int coin = rec(n-1, amount, coins, dp);
//         if(coin >= 1e9) return -1;
//         return coin;
//     }
// };


// tabulation

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<vector<int>> dp(n, vector<int>(amount+1, -1));
//         for(int amt=0 ; amt<=amount ; amt++){
//             if(amt % coins[0] == 0) dp[0][amt] = amt / coins[0];
//             else dp[0][amt] = 1e9;
//         }
//         for(int idx=1 ; idx<n ; idx++){
//             for(int amt=0 ; amt<=amount ; amt++){
//                 int not_take = dp[idx-1][amt];
//                 int take = INT_MAX;
//                 if(coins[idx] <= amt){
//                     take = 1 + dp[idx][amt - coins[idx]];
//                 }
//                 dp[idx][amt] = min(take, not_take);
//             }
//         }
//         if(dp[n-1][amount] >= 1e9) return -1;
//         return dp[n-1][amount];
//     }
// };

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
//         for(int amt=0 ; amt<=amount ; amt++){
//             dp[0][amt] = 1e9;
//         }
//         for(int idx=0 ; idx<=n ; idx++){
//             dp[idx][0] = 0;
//         }
//         for(int idx=1 ; idx<=n ; idx++){
//             for(int amt=0 ; amt<=amount ; amt++){
//                 int not_take = dp[idx-1][amt];
//                 int take = INT_MAX;
//                 if(coins[idx-1] <= amt){
//                     take = 1 + dp[idx][amt - coins[idx-1]];
//                 }
//                 dp[idx][amt] = min(take, not_take);
//             }
//         }
//         if(dp[n][amount] >= 1e9) return -1;
//         return dp[n][amount];
//     }
// };


// space optimization

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<int> prev(amount+1, -1);
//         for(int amt=0 ; amt<=amount ; amt++){
//             if(amt % coins[0] == 0) prev[amt] = amt / coins[0];
//             else prev[amt] = 1e9;
//         }
//         vector<int> curr(amount+1, -1);
//         for(int idx=1 ; idx<n ; idx++){
//             for(int amt=0 ; amt<=amount ; amt++){
//                 int not_take = prev[amt];
//                 int take = INT_MAX;
//                 if(coins[idx] <= amt){
//                     take = 1 + curr[amt - coins[idx]];
//                 }
//                 curr[amt] = min(take, not_take);
//             }
//             prev = curr;
//         }
//         if(prev[amount] >= 1e9) return -1;
//         return prev[amount];
//     }
// };

// class Solution {
// public:
//     int coinChange(vector<int>& coins, int amount) {
//         int n = coins.size();
//         vector<int> prev(amount+1, 1e9);
//         prev[0] = 0;
//         vector<int> curr(amount+1, -1);
//         curr[0] = 0; 
//         for(int idx=0 ; idx<n ; idx++){
//             for(int amt=0 ; amt<=amount ; amt++){
//                 int not_take = prev[amt];
//                 int take = INT_MAX;
//                 if(coins[idx] <= amt){
//                     take = 1 + curr[amt - coins[idx]];
//                 }
//                 curr[amt] = min(take, not_take);
//             }
//             prev = curr;
//         }
//         if(prev[amount] >= 1e9) return -1;
//         return prev[amount];
//     }
// };
