// leetcode

// class Solution {
// public:
//     int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//         int n = customers.size();
//         int sat_loss = 0;
//         for (int i = 0; i < minutes; i++) {
//             if (grumpy[i] == 1) {
//                 sat_loss += customers[i];
//             }
//         }
//         int max_sat_loss = sat_loss;
//         int idx = 0;
//         int i = 1;
//         int j = minutes;
//         while (j < n) {
//             if (grumpy[i - 1] == 1)
//                 sat_loss -= customers[i - 1];
//             if (grumpy[j] == 1)
//                 sat_loss += customers[j];
//             if (sat_loss > max_sat_loss) {
//                 idx = i;
//                 max_sat_loss = sat_loss;
//             }
//             i++;
//             j++;
//         }
//         for (int i = idx; i < (idx + minutes); i++) {
//             grumpy[i] = 0;
//         }
//         int sat_customers = 0;
//         for (int i = 0; i < n; i++) {
//             if (grumpy[i] == 0)
//                 sat_customers += customers[i];
//         }
//         return sat_customers;
//     }
// };