// leetcode

// class Solution {
// public:
//     ListNode* partition(ListNode* head, int x) {
//         ListNode* low = new ListNode(-1);
//         ListNode* high = new ListNode(-1);
//         ListNode* tl = low;
//         ListNode* th = high;
//         ListNode* t = head;
//         while (t != NULL) {
//             if (t->val < x) {
//                 tl->next = t;
//                 tl = t;
//             } else {
//                 th->next = t;
//                 th = t;
//             }
//             t = t->next;
//         }
//         th->next = NULL;
//         tl->next = high->next;
//         return low->next;
//     }
// };