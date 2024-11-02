// leetcode


// class Solution {
// public:
//     char flip(char c){
//         if(c == '0') return '1';
//         return '0';
//     }
//     char findKthBit(int n, int k) {
//         if(n==1) return '0';
//         int n_size = (1<<n)-1;
//         if(k-1 == n_size/2) return '1';
//         if(k-1 < n_size/2) return findKthBit(n-1,k);
//         if(k-1 > n_size/2) return flip(findKthBit(n-1,n_size+1-k));
//         return 'a';
//     }
// };
