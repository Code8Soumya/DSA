// leetcode


// class Solution {
// public:
//     void backtrack(int idx, int &max_count, int n, set<string> &st, string &s){
//         if(idx == n){
//             max_count = max(max_count, (int)st.size());
//             return;
//         }
//         for(int i=idx ; i<n ; i++){
//             string temp = s.substr(idx,i-idx+1);
//             if(st.find(temp) == st.end()){
//                 st.insert(temp);
//                 backtrack(i+1,max_count,n,st,s);
//                 st.erase(temp);
//             }
//         }
//     }
//     int maxUniqueSplit(string s) {
//         int max_count = 0;
//         set<string> st;
//         backtrack(0, max_count, s.size(), st, s);
//         return max_count;
//     }
// };