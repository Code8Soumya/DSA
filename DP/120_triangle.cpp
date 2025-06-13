// https://leetcode.com/problems/triangle/


// memoization

// class Solution {
// public:
//     int rec(int row, int col, vector<vector<int>> &dp, vector<vector<int>> &triangle){
//         if(row >= triangle.size()) return 0;
//         if(dp[row][col] != -1) return dp[row][col];
//         int points = triangle[row][col];
//         int take_this_col = points + rec(row+1, col, dp, triangle);
//         int take_next_col = points + rec(row+1, col+1, dp, triangle);
//         return dp[row][col] = min(take_this_col, take_next_col);
//     }
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         int n = triangle[m-1].size();
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return rec(0, 0, dp, triangle);
//     }
// };


// tabulation

// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         int n = triangle[m-1].size();
//         vector<vector<int>> dp(m+1, vector<int>(n+1, -1));
//         for(int j=0 ; j<=n ; j++) dp[m][j] = 0;
//         for(int row=m-1 ; row>=0 ; row--){
//             for(int col=0 ; col<triangle[row].size() ; col++){
//                 dp[row][col] = triangle[row][col] + min(dp[row+1][col], dp[row+1][col+1]);
//             }
//         }
//         return dp[0][0];
//     }
// };


// space optimization

// class Solution {
// public:
//     int minimumTotal(vector<vector<int>>& triangle) {
//         int m = triangle.size();
//         int n = triangle[m-1].size();
//         vector<int> dp(n+1, 0);
//         vector<int> temp(n+1, -1);
//         for(int row=m-1 ; row>=0 ; row--){
//             for(int col=0 ; col<triangle[row].size() ; col++){
//                 temp[col] = triangle[row][col] + min(dp[col], dp[col+1]);
//             }
//             dp = temp;
//         }
//         return dp[0];
//     }
// };