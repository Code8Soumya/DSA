// recursion + memoization

// class Solution {
//     private:
//         int dcol[3] = {-1, 0, 1};
//     public:
//         int rec(int row, int col1, int col2, int n, int m, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp){
//             if(row > n-1) return 0;
//             if(dp[row][col1][col2] != -1) return dp[row][col1][col2];
//             int temp = grid[row][col1];
//             int tp = grid[row][col1];
//             grid[row][col1] = 0;
//             tp += grid[row][col2];
//             int tPoint = 0;
//             for(int i=0 ; i<3 ; i++){
//                 int newCol1 = col1 + dcol[i];
//                 if(newCol1<0 || newCol1>m-1) continue;
//                 for(int j=0 ; j<3 ; j++){
//                     int newCol2 = col2 + dcol[j];
//                     if(newCol2<0 || newCol2>m-1) continue;
//                     tPoint = max(tPoint, rec(row+1, newCol1, newCol2, n, m, grid, dp));
//                 }
//             }
//             grid[row][col1] = temp;
//             return dp[row][col1][col2] = (tp + tPoint);
//         }
//         int solve(int n, int m, vector<vector<int>>& grid) {
//             vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
//             return rec(0, 0, m-1, n, m, grid, dp);
//         }
// };


// Tabulation

// class Solution {
//     public:
//         int solve(int n, int m, vector<vector<int>>& grid) {
//             vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
//             for(int i=0 ; i<n ; i++){
//                 for(int j=0 ; j<m ; j++){
//                     for(int k=0 ; k<m ; k++){
//                         if(j==k) dp[i][j][k] = grid[i][k];
//                         else{
//                             dp[i][j][k] = grid[i][j] + grid[i][k];
//                         }
//                     }
//                 }
//             }
//             int dcol[3] = {-1, 0, 1};
//             for(int row=n-2 ; row>=0 ; row--){
//                 for(int col1=0 ; col1<m ; col1++){
//                     for(int col2=0 ; col2<m ; col2++){
//                         int pt = 0;
//                         for(int i=0 ; i<3  ;i++){
//                             int newcol1 = col1 + dcol[i];
//                             if(newcol1<0 || newcol1>=m) continue;
//                             for(int j=0 ; j<3 ; j++){
//                                 int newcol2 = col2 + dcol[j];
//                                 if(newcol2<0 || newcol2>=m) continue;
//                                 pt = max(pt, dp[row+1][newcol1][newcol2]);
//                             }
//                         }
//                         if(col1 == col2) dp[row][col1][col2] = pt + grid[row][col1];
//                         else{
//                             dp[row][col1][col2] = pt + grid[row][col1] + grid[row][col2];
//                         }
//                     }
//                 }
//             }
//             return dp[0][0][m-1];
//         }
// };



