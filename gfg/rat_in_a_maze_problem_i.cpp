// gfg


// class Solution {
//   public:
//     void pathfinder(string &s, int n, int row, int col, vector<char> &direction, vector<int> &drow, vector<int> &dcol,
//                     vector<vector<int>> &vis, vector<vector<int>> &mat, vector<string> &ans){
//         if(row == n-1 && col == n-1){
//             ans.push_back(s);
//             return;
//         }
//         vis[row][col] = 1;
//         for(int i=0 ; i<4 ; i++){
//             int nrow = row+drow[i];
//             int ncol = col+dcol[i];
//             if(nrow >=0 && ncol >= 0 && nrow < n && ncol < n && vis[nrow][ncol] == -1 && mat[nrow][ncol] == 1){
//                 s.push_back(direction[i]);
//                 pathfinder(s, n, nrow, ncol, direction, drow, dcol, vis, mat, ans);
//                 s.pop_back();
//                 vis[nrow][ncol] = -1;
//             }
//         }
//     }
//     vector<string> findPath(vector<vector<int>> &mat) {
//         int n = mat.size();
//         vector<string> ans;
//         if(mat[0][0] == 0 || mat[n-1][n-1] == 0) return ans;
//         vector<vector<int>> vis(n, vector<int>(n, -1));
//         string s;
//         vector<int> drow = {1, 0, 0, -1};
//         vector<int> dcol = {0, -1, 1, 0};
//         vector<char> direction = {'D', 'L', 'R', 'U'};
//         pathfinder(s, n, 0, 0, direction, drow, dcol, vis, mat, ans);
//         return ans;
//     }
// };
