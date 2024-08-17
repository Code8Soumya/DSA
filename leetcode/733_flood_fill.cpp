// leetcode


// class Solution {
// public:
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         int n = image.size();
//         int m = image[0].size();
//         vector<vector<int>> ans = image;
//         vector<vector<int>> vis(n, vector<int>(m, 0));
//         int initial_col = image[sr][sc];
//         vis[sr][sc] = 1;
//         ans[sr][sc] = color;
//         queue<pair<int, int>> q;
//         q.push({sr, sc});
//         int drow[] = {-1, 0, 1, 0};
//         int dcol[] = {0, 1, 0, -1};
//         while(!q.empty()){
//             int row = q.front().first;
//             int col = q.front().second;
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int nrow = row + drow[i];
//                 int ncol = col + dcol[i];
//                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && image[nrow][ncol] == initial_col){
//                     ans[nrow][ncol] = color;
//                     vis[nrow][ncol] = 1;
//                     q.push({nrow, ncol});
//                 }
//             }
//         }
//         return ans;
//     }
// };