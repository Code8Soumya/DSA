// gfg


// better
// class Solution {
//   public:
//     int totalFruits(vector<int> &arr) {
//         int n = arr.size();
//         int l = 0, r = 0;
//         unordered_map<int, int> mpp;
//         int max_fruits = 0;
//         while(r < n){
//             mpp[arr[r]]++;
//             while(mpp.size() > 2){
//                 mpp[arr[l]]--;
//                 if(mpp[arr[l]] == 0){
//                     mpp.erase(arr[l]);
//                 }
//                 l++;
//             }
//             max_fruits = max(max_fruits, r-l+1);
//             r++;
//         }
//         return max_fruits;
//     }
// };

// optimal 
// class Solution {
//   public:
//     int totalFruits(vector<int> &arr) {
//         int n = arr.size();
//         int l = 0, r = 0;
//         unordered_map<int, int> mpp;
//         int max_fruits = 0;
//         while(r < n){
//             mpp[arr[r]]++;
//             if(mpp.size() > 2){
//                 mpp[arr[l]]--;
//                 if(mpp[arr[l]] == 0){
//                     mpp.erase(arr[l]);
//                 }
//                 l++;
//             }
//             if(mpp.size() <= 2) max_fruits = max(max_fruits, r-l+1);
//             r++;
//         }
//         return max_fruits;
//     }
// };

