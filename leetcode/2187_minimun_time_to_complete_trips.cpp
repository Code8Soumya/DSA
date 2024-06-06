





// leetcode


// class Solution {
// public:
//     bool check(vector<int>& time, int totalTrips, long long mid) {
//         int n = time.size();
//         long long trips = 0;
//         for (int i = 0; i < n; i++) {
//             trips += mid / time[i];
//             if (trips >= totalTrips)
//                 return true;
//         }
//         return false;
//     }
//     long long minimumTime(vector<int>& time, int totalTrips) {
//         int n = time.size();
//         long long min = INT_MAX;
//         for (int i = 0; i < n; i++) {
//             if (time[i] < min)
//                 min = time[i];
//         }
//         long long l = 1;
//         long long r = min * totalTrips;
//         long long mid;
//         long long min_time;
//         while (l <= r) {
//             mid = l + (r - l) / 2;
//             if (check(time, totalTrips, mid)) {
//                 min_time = mid;
//                 r = mid - 1;
//             } else
//                 l = mid + 1;
//         }
//         return min_time;
//     }
// };