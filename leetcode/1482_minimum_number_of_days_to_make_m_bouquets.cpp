// leetcode

// class Solution {
// public:
//     int days(vector<int> &bloomDay, int n, int k, int today){
//         int bouquets = 0;
//         int flowersinbouquet = 0;
//         for(int i=0;i<n;i++){
//             if(today>=bloomDay[i]){
//                 flowersinbouquet++;
//             }
//             else{
//                 flowersinbouquet = 0;
//             }
//             if(flowersinbouquet==k){
//                 bouquets++;
//                 flowersinbouquet = 0;
//             }
//         }
//         return bouquets;
//     }
//     int minDays(vector<int>& bloomDay, int m, int k) {
//         long long totalflowers = m * 1ll * k * 1ll;
//         if(totalflowers > bloomDay.size()) return -1;
//         int n = bloomDay.size();
//         int mindays = *min_element(bloomDay.begin(),bloomDay.end());
//         int maxdays = *max_element(bloomDay.begin(),bloomDay.end());
//         int ans = -1;
//         while(mindays<=maxdays){
//             int today = mindays+(maxdays-mindays)/2;
//             int bouquets = days(bloomDay, n, k, today);
//             if(bouquets>=m){
//                 ans = today;
//                 maxdays = today-1;
//             }
//             else{
//                 mindays = today+1;
//             }
//         }
//         return ans;
//     }
// };