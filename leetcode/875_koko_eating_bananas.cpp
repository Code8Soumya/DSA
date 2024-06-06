#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    x = 14/15+1;
    cout<<x;
    return 0;
}



// leetcode

// class Solution {
// public:
//     bool time_taken(vector<int> &piles, int h, int eatting_speed){
//         int n = piles.size();
//         int l = 0;
//         int time_taken = 0;
//         while(l < n){
//             if(piles[l] % eatting_speed == 0) time_taken += (piles[l]/eatting_speed);
//             else time_taken += (piles[l]/eatting_speed)+1;
//             l++;
//             if(time_taken > h) return false;
//         }
//         return true;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n = piles.size();
//         int max = -1;
//         for(int i=0;i<n;i++){
//             if(piles[i] > max) max = piles[i];
//         }
//         int l = 1;
//         int r = max;
//         int eatting_speed;
//         int min_eatting_speed;
//         while(l <= r){
//             eatting_speed = l+(r-l)/2;
//             if(time_taken(piles, h, eatting_speed)){
//                 min_eatting_speed = eatting_speed;
//                 r = eatting_speed - 1;
//             }
//             else l = eatting_speed + 1;
//         }
//         return min_eatting_speed;
//     }
// };