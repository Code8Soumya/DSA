// recursion + memoization

// class Solution {
// public:
//     int rec(int row, int col, vector<vector<int>> &memo){
//         if(row==0 && col==0) return 1;
//         if(row<0 || col<0) return 0;
//         if(memo[row][col] != -1) return memo[row][col];
//         int up = rec(row-1, col, memo);
//         int left = rec(row, col-1, memo);
//         return memo[row][col] = up + left;
//     }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> memo(m, vector<int>(n, -1));
//         return rec(m-1, n-1, memo);
//     }
// };


// tabulation

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<vector<int>> memo(m, vector<int>(n, 0));
//         memo[0][0] = 1;
//         for(int i=0 ; i<m ; i++){
//             for(int j=0 ; j<n ; j++){
//                 if(i==0 && j==0) continue;
//                 int up=0, left=0;
//                 if(i>=1) up = memo[i-1][j];
//                 if(j>=1) left = memo[i][j-1];
//                 memo[i][j] = up + left;
//             }
//         }
//         return memo[m-1][n-1];
//     }
// };


// tabulation + space optimization

// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         vector<int> memo(n, 0);
//         memo[0] = 1;
//         for(int i=0 ; i<m ; i++){
//             vector<int> temp(n, 0);
//             int lefty = 0;
//             for(int j=0 ; j<n ; j++){
//                 int up = memo[j];
//                 int left = lefty;
//                 lefty = temp[j] = up + left;
//             }
//             memo = temp;
//         }
//         return memo[n-1];
//     }
// };
