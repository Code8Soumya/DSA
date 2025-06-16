// https://leetcode.com/problems/longest-common-subsequence/


// memoization

// int rec(int idx1, int idx2, string &text1, string &text2, vector<vector<int>> &memo){
//     if(idx1<0 || idx2<0) return 0;
//     if(memo[idx1][idx2] != -1) return memo[idx1][idx2];
//     if(text1[idx1] == text2[idx2]){
//         return memo[idx1][idx2] = 1 + rec(idx1-1, idx2-1, text1, text2, memo);
//     }
//     else{
//         return memo[idx1][idx2] = max(rec(idx1-1, idx2, text1, text2, memo), rec(idx1, idx2-1, text1, text2, memo));
//     }
// }
// int longestCommonSubsequence(string text1, string text2) {
//     int n = text1.size();
//     int m = text2.size();
//     vector<vector<int>> memo(n, vector<int>(m, -1));
//     return rec(n-1, m-1, text1, text2, memo);
// }


// memoization (shifted index)

// int rec(int idx1, int idx2, string &text1, string &text2, vector<vector<int>> &memo){
//     if(idx1==0 || idx2==0) return 0;
//     if(memo[idx1][idx2] != -1) return memo[idx1][idx2];
//     if(text1[idx1-1] == text2[idx2-1]){
//         return memo[idx1][idx2] = 1 + rec(idx1-1, idx2-1, text1, text2, memo);
//     }
//     else{
//         return memo[idx1][idx2] = max(rec(idx1-1, idx2, text1, text2, memo), rec(idx1, idx2-1, text1, text2, memo));
//     }
// }
// int longestCommonSubsequence(string text1, string text2) {
//     int n = text1.size();
//     int m = text2.size();
//     vector<vector<int>> memo(n+1, vector<int>(m+1, -1));
//     return rec(n, m, text1, text2, memo);
// }


// tabulation (shifted index)

// int longestCommonSubsequence(string text1, string text2) {
//     int n = text1.size();
//     int m = text2.size();
//     vector<vector<int>> memo(n+1, vector<int>(m+1, -1));
//     for(int i=0 ; i<=n ; i++) memo[i][0]=0;
//     for(int j=0 ; j<=m ; j++) memo[0][j]=0;
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=m ; j++){
//             if(text1[i-1] == text2[j-1]){
//                 memo[i][j] = 1 + memo[i-1][j-1];
//             }
//             else{
//                 memo[i][j] = max(memo[i-1][j], memo[i][j-1]);
//             }
//         }
//     }
//     return memo[n][m];
// }


// space optimization (shifted index)

// int longestCommonSubsequence(string text1, string text2) {
//     int n = text1.size();
//     int m = text2.size();
//     vector<int> memo(m+1, -1);
//     for(int i=0 ; i<=m ; i++) memo[i] = 0;
//     vector<int> temp(m+1, -1);
//     temp[0] = 0;
//     for(int i=1 ; i<=n ; i++){
//         int left = 0;
//         for(int j=1 ; j<=m ; j++){
//             if(text1[i-1] == text2[j-1]){
//                 temp[j] = 1 + memo[j-1];
//             }
//             else{
//                 temp[j] = max(memo[j], left);
//             }
//             left = temp[j];
//         }
//         memo = temp;
//     }
//     return memo[m];
// }