// leetcode


// class Solution {
// public:
//     void solve(int col, int n, vector<string> &board, vector<int> &left_side, vector<int> &upper_dia, vector<int> &lower_dia, vector<vector<string>> &ans){
//         if(col >= n){
//             ans.push_back(board);
//             return;
//         }
//         for(int i=0; i<n; i++){
//             int row = i;
//             if(left_side[row] == 0 && upper_dia[n-1+col-row] == 0 && lower_dia[row+col] == 0){
//                 left_side[row] = 1;
//                 upper_dia[n-1+col-row] = 1;
//                 lower_dia[row+col] = 1;
//                 board[row][col] = 'Q';
//                 solve(col+1, n, board, left_side, upper_dia, lower_dia, ans);
//                 left_side[row] = 0;
//                 upper_dia[n-1+col-row] = 0;
//                 lower_dia[row+col] = 0;
//                 board[row][col] = '.';
//             }
//         }
//     }
//     vector<vector<string>> solveNQueens(int n) {
//         vector<vector<string>> ans;
//         vector<string> board;
//         string s(n, '.');
//         for(int i=0; i<n; i++){
//             board.push_back(s);
//         }
//         vector<int> left_side(n, 0), upper_dia(2*n-1, 0), lower_dia(2*n - 1);
//         solve(0, n, board, left_side, upper_dia, lower_dia, ans);
//         return ans;
//     }
// };