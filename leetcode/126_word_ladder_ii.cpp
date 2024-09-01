// leetcode


// Better solution
// class Solution {
// public:
//     vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//         vector<vector<string>> ans;
//         unordered_set<string> wordlist_set(wordList.begin(), wordList.end());
//         if(wordlist_set.find(endWord) == wordlist_set.end()) return ans;
//         queue<vector<string>> q;
//         q.push({beginWord});
//         vector<string> temp_vec;
//         int count = 0;
//         bool flag = true;
//         while(!q.empty()){
//             vector<string> str_vec = q.front();
//             q.pop();
//             if(str_vec.size() > count){
//                 count++;
//                 for(auto it : temp_vec){
//                     wordlist_set.erase(it);
//                 }
//                 temp_vec.clear();
//             }
//             string last_word = str_vec.back();
//             if(last_word == endWord){
//                 ans.push_back(str_vec);
//                 flag = false; 
//             }
//             if(flag){
//                 for(int i=0 ; i<last_word.size() ; i++){
//                     string temp = last_word;
//                     for(char j='a';j<='z';j++){
//                         temp[i] = j;
//                         if(wordlist_set.find(temp) != wordlist_set.end()){
//                             str_vec.push_back(temp);
//                             q.push(str_vec);
//                             str_vec.pop_back();
//                             temp_vec.push_back(temp);
//                         }
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };