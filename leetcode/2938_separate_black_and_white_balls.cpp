// leetcode


// class Solution {
// public:
//     long long minimumSteps(string s) {
//         long long int swap = 0;
//         int b = 0, c = 0;
//         while(c<s.size()){
//             if(s[c] == '0'){
//                 swap += c-b;
//                 b++;
//             }
//             c++;
//         }
//         return swap;
//     }
// };