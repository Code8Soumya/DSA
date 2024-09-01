// leetcode

// better
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<int, int> mpp;
//         for(int i=97;i<97+26;i++){
//             mpp[i] = 0;
//         }
//         int i = 0, j = 0;
//         int max_len = 0;
//         while(j<s.size()){
//             mpp[(int)s[j]]++;
//             int len = j-i+1;
//             if(mpp[(int)s[j]] <= 1) max_len = max(max_len, len);
//             while(mpp[(int)s[j]] > 1){
//                 mpp[(int)s[i]]--;
//                 i++;
//             } 
//             j++;
//         }
//         return max_len;
//     }
// };

// optimal
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int n = s.size();
//         if(n==0) return 0;
//         int l = 0, r = 0;
//         int max_len = 0;
//         vector<int> vis(256, -1);
//         while(r<n){
//             if(vis[s[r]] != -1 && l <= vis[s[r]]){
//                 l = vis[s[r]] + 1;
//             }
//             vis[s[r]] = r;
//             max_len = max(max_len, r-l+1);
//             r++;
//         }
//         return max_len;
//     }
// };