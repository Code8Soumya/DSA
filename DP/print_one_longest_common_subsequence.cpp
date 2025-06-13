// tabulation (shifted index)

// string longest_common_subsequence(string text1, string text2) {
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
//     string lcs = "";
//     int i=n, j=m;
//     while(i>0 && j>0){
//         if(text1[i-1] == text2[j-1]){
//             lcs += text1[i-1];
//             i--;
//             j--;
//         }
//         else{
//             if(memo[i-1][j] >= memo[i][j-1]){
//                 i--;
//             }
//             else j--;
//         }
//     }
//     reverse(lcs.begin(), lcs.end());
//     return lcs;
// }