// leetcode


// class Solution {
// public:
//     int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
//         unordered_set<string> wordlist_set(wordList.begin(), wordList.end());
//         if(wordlist_set.find(endWord) == wordlist_set.end()) return 0;
//         queue<pair<string, int>> q;
//         q.push({beginWord, 1});
//         if(wordlist_set.find(beginWord) != wordlist_set.end()) wordlist_set.erase(beginWord);
//         while(!q.empty()){
//             string curr_str = q.front().first;
//             int curr_level = q.front().second;
//             q.pop();
//             for(int i=0;i<curr_str.size();i++){
//                 string temp = curr_str;
//                 for(int j=97;j<=122;j++){
//                     temp[i] = (char)j;
//                     if(temp == endWord) return curr_level+1;
//                     else if(wordlist_set.find(temp) != wordlist_set.end()){
//                         q.push({temp, curr_level+1});
//                         wordlist_set.erase(curr_str);
//                     }
//                 }
//             }
//         }
//         return 0;
//     }
// };