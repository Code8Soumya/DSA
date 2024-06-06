// leetcode

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int n = s.size();
//         bool got_first_word = false;
//         int len = 0;
//         for (int i = n - 1; i >= 0; i--) {
//             if (got_first_word && s[i] == ' ')
//                 break;
//             else if (s[i] != ' ') {
//                 got_first_word = true;
//                 len++;
//             }
//         }
//         return len;
//     }
// };