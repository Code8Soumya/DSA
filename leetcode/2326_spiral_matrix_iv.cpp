// leetcode

// class Solution {
// public:
//     vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
//         vector<vector<int>> arr(m, vector<int>(n, -1));
//         int minr = 0;
//         int maxr = m - 1;
//         int minc = 0;
//         int maxc = n - 1;
//         ListNode* temp = head;
//         while (minr <= maxr && minc <= maxc) {
//             for (int j = minc; j <= maxc; j++) {
//                 if (temp == NULL)
//                     return arr;
//                 arr[minr][j] = temp->val;
//                 temp = temp->next;
//             }
//             minr++;
//             if (minr > maxr || minc > maxc)
//                 break;
//             for (int j = minr; j <= maxr; j++) {
//                 if (temp == NULL)
//                     return arr;
//                 arr[j][maxc] = temp->val;
//                 temp = temp->next;
//             }
//             maxc--;
//             if (minr > maxr || minc > maxc)
//                 break;
//             for (int j = maxc; j >= minc; j--) {
//                 if (temp == NULL)
//                     return arr;
//                 arr[maxr][j] = temp->val;
//                 temp = temp->next;
//             }
//             maxr--;
//             if (minr > maxr || minc > maxc)
//                 break;
//             for (int j = maxr; j >= minr; j--) {
//                 if (temp == NULL)
//                     return arr;
//                 arr[j][minc] = temp->val;
//                 temp = temp->next;
//             }
//             minc++;
//             if (minr > maxr || minc > maxc)
//                 break;
//         }
//         return arr;
//     }
// };