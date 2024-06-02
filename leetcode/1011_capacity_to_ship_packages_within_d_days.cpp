#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int capacity = 15;
    int n = weights.size();
    int req_days = 0;
    int l = -1;
    int load = 0;
    while((req_days <= days) && (l < n)){
        while((load < capacity) && (l < n-1)){
            l++;
            load += weights[l];
        }
        if((load > capacity) && (l < n)) load = weights[l];
        else load = 0;
        req_days++;
    }
    cout<<req_days<<endl;
    return req_days;
}



// leetcode

// class Solution {
// public:
//     int required_days(vector<int>& weights, int days, int capacity) {
//         int n = weights.size();
//         int req_days = 1;
//         int load = 0;
//         for (int i = 0; i < n; i++) {
//             if (weights[i] + load > capacity) {
//                 req_days++;
//                 load = weights[i];
//             } else
//                 load += weights[i];
//         }
//         return req_days;
//     }
//     int shipWithinDays(vector<int>& weights, int days) {
//         int n = weights.size();
//         int max_element = INT_MIN;
//         int sum;
//         for (int i = 0; i < n; i++) {
//             if (weights[i] > max_element)
//                 max_element = weights[i];
//             sum += weights[i];
//         }
//         int l = max_element;
//         int r = sum;
//         int capacity;
//         int min_capacity = sum;
//         while (l <= r) {
//             capacity = l + (r - l) / 2;
//             if (required_days(weights, days, capacity) <= days) {
//                 min_capacity = capacity;
//                 r = capacity - 1;
//             } else
//                 l = capacity + 1;
//         }
//         return min_capacity;
//     }
// };
