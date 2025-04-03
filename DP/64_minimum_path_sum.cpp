// recursion + memoization

// class Solution {
// public:
//     int rec(int row, int col, vector<vector<int>> &memo, vector<vector<int>> &grid){
//         if(row==0 && col==0) return grid[0][0];
//         if(row<0 || col<0) return 100000;
//         if(memo[row][col] != -1) return memo[row][col];
//         int up = grid[row][col] + rec(row-1,col,memo,grid);
//         int left = grid[row][col] + rec(row,col-1,memo,grid);
//         return memo[row][col] = min(up,left);
//     }
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int>> memo(m, vector<int> (n, -1));
//         return rec(m-1, n-1, memo, grid);
//     }
// };


// tabulation

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<vector<int>> memo(m, vector<int> (n, -1));
//         memo[0][0] = grid[0][0];
//         for(int i=0 ; i<m ; i++){
//             for(int j=0 ; j<n ; j++){
//                 if(i==0 && j==0) continue;
//                 int up=1e5,left=1e5;
//                 if(i>0) up = grid[i][j] + memo[i-1][j];
//                 if(j>0) left = grid[i][j] + memo[i][j-1];
//                 memo[i][j] = min(up,left); 
//             }
//         }
//         return memo[m-1][n-1];
//     }
// };


// tabulation + space optimization

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         vector<int> memo(n, 1e5);
//         for(int i=0 ; i<m ; i++){
//             int left = 1e5;
//             vector<int> temp(n);
//             for(int j=0 ; j<n ; j++){
//                 if(i==0 && j==0) {
//                     temp[j] = grid[0][0];
//                     left = grid[0][0];
//                     continue;
//                 }
//                 int up = grid[i][j] + memo[j];
//                 left += grid[i][j];
//                 left = min(left,up);
//                 temp[j] = left;
//             }
//             memo = temp;
//         }
//         return memo[n-1];
//     }
// };

