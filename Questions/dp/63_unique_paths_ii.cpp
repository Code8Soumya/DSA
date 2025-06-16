// https://leetcode.com/problems/unique-paths-ii/


// memoization

// class Solution {
// public:
//     int rec(int row, int col, vector<vector<int>> &memo, vector<vector<int>> &obstacleGrid){
//         if(row==0 && col==0) return 1;
//         if(row<0 || col<0 || obstacleGrid[row][col] == 1 || obstacleGrid[row][col] == 1) return 0;
//         if(memo[row][col] != -1) return memo[row][col];
//         int up = rec(row-1, col, memo, obstacleGrid);
//         int left = rec(row, col-1, memo, obstacleGrid);
//         return memo[row][col] = up + left;
//     }
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size();
//         int n = obstacleGrid[0].size();
//         if(obstacleGrid[m-1][n-1] == 1 || obstacleGrid[0][0] == 1) return 0;
//         vector<vector<int>> memo(m, vector<int> (n, -1));
//         return rec(m-1, n-1, memo, obstacleGrid);
//     }
// };


// tabulation  

// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size();
//         int n = obstacleGrid[0].size();
//         vector<vector<int>> memo(m, vector<int> (n, -1));
//         memo[0][0] = 1;
//         for(int i=0 ; i<m ; i++){
//             for(int j=0 ; j<n ; j++){
//                 if(obstacleGrid[i][j]){
//                     memo[i][j] = 0;
//                     continue;
//                 }
//                 if(i==0 && j==0) continue;
//                 int up=0,left=0;
//                 if(i>0) up = memo[i-1][j];
//                 if(j>0) left = memo[i][j-1];
//                 memo[i][j] = up + left;
//             }
//         }
//         return memo[m-1][n-1];
//     }
// };


// space optimization

// class Solution {
// public:
//     int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//         int m = obstacleGrid.size();
//         int n = obstacleGrid[0].size();
//         vector<int> memo(n, 0);
//         memo[0] = 1;
//         for(int i=0 ; i<m ; i++){
//             int left = 0;
//             vector<int> temp(n);
//             for(int j=0 ; j<n ; j++){
//                 if(obstacleGrid[i][j]){
//                     temp[j] = 0;
//                     left = 0;
//                     continue;
//                 }
//                 int up = memo[j];
//                 left += up;
//                 temp[j] = left;
//             }
//             memo = temp;
//         }
//         return memo[n-1];
//     }
// };