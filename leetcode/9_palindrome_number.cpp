// leetcode

// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x < 0) return false;
//         long long int n = 0;
//         long long int m = x;
//         while(x>0){
//             n *= 10;
//             n += x % 10;
//             x /= 10;
//         }
//         if(n == m){
//             return true;
//         }
//         else return false;
//     }
// };