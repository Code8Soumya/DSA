// https://leetcode.com/problems/word-break/


// memoization

// class Solution {
// public:
//     bool rec(int idx, int n, string s, unordered_set<string> &st, vector<int> &dp){
//         if(idx == n) return true;
//         if(dp[idx] != -1) return dp[idx];
//         string temp = "";
//         for(int i=idx ; i<n ; i++){
//             temp += s[i];
//             if(st.find(temp) != st.end()){
//                 if(rec(i+1, n, s, st, dp)) return dp[idx] = true;
//             }
//         }
//         return dp[idx] = false;
//     }
//     bool wordBreak(string s, vector<string>& wordDict) {
//         unordered_set<string> st(wordDict.begin(), wordDict.end());
//         int n = s.size();
//         vector<int> dp(n, -1);
//         return rec(0, n, s, st, dp);
//     }
// };


// tabulation

// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
//         unordered_set<string> st(wordDict.begin(), wordDict.end());
//         int n = s.size();
//         vector<int> dp(n+1, false);
//         dp[n] = 1;
//         for(int idx=n-1 ; idx>=0 ; idx--){
//             string temp = "";
//             for(int i=idx ; i<n ; i++){
//                 temp += s[i];
//                 if(st.find(temp) != st.end()){
//                     if(dp[i+1]) {
//                         dp[idx] = true;
//                         break;
//                     }
//                 }
//             }
//         }
//         return dp[0];
//     }
// };

