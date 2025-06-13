// https://leetcode.com/problems/candy/


// normal approach using two passes S.C. O(n) T.C. O(n)
// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         int n = ratings.size();
//         vector<int> prePost(n);
//         int prevEle = -1;
//         int prevCandy = 0;
//         for(int i=0 ; i<n ; i++){
//             if(ratings[i] > prevEle) prevCandy++;
//             else prevCandy = 1;
//             prePost[i] = prevCandy;
//             prevEle = ratings[i];
//         }
//         prevEle = -1;
//         prevCandy = 0;
//         int sumi = 0;
//         for(int i=n-1 ; i>=0 ; i--){
//             if(ratings[i] > prevEle) prevCandy++;
//             else prevCandy = 1;
//             sumi += max(prePost[i], prevCandy);
//             prevEle = ratings[i];
//         }
//         return sumi;
//     }
// };


// optimized slope approach S.C. O(1) T.C. O(n)
// class Solution {
// public:
//     int candy(vector<int>& ratings) {
//         int n = ratings.size();
//         int sumi = 1;
//         int i = 1;
//         while(i<n){
//             if(ratings[i] == ratings[i-1]){
//                 sumi += 1;
//                 i++;
//                 continue;
//             }
//             int peak = 1;
//             while(i<n && ratings[i] > ratings[i-1]){
//                 peak++;
//                 sumi += peak;
//                 i++;
//             }
//             int down = 0;
//             while(i<n && ratings[i] < ratings[i-1]){
//                 down++;
//                 sumi += down;
//                 i++;
//             }
//             if(down >= peak) sumi += (down - peak + 1);
//         }
//         return sumi;
//     }
// };

