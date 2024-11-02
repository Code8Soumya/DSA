// leetcode

// Brute force
// class Solution {
// public:
//     vector<int> intToArray(int num){
//         vector<int> digits;
//         while (num > 0) {
//             int digit = num % 10;  
//             digits.push_back(digit);
//             num /= 10;
//         }
//         reverse(digits.begin(), digits.end());
//         return digits;
//     }
//     int arrayToInt(vector<int>& digits){
//         int number = 0;
//         for (int digit : digits) {
//             number = number * 10 + digit;
//         }
//         return number;
//     }
//     int maximumSwap(int num){
//         vector<int> digits = intToArray(num);
//         int n = digits.size();
//         for(int i=0 ; i<n ; i++){
//             int max_idx = i;
//             for(int j=i+1 ; j<n ; j++){
//                 if(digits[j] > digits[i] && digits[j] >= digits[max_idx]) max_idx = j;
//             }
//             if(max_idx != i){
//                 swap(digits[i], digits[max_idx]);
//                 break;
//             }
//         }
//         return arrayToInt(digits);
//     }
// };