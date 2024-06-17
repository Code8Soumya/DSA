// leetcode

// class Solution {
// public:
//     ListNode* merge(ListNode*& a, ListNode*& b) {
//         ListNode* tempA = a;
//         ListNode* tempB = b;
//         ListNode* headMerged = new ListNode(-1);
//         ListNode* tempMerged = headMerged;
//         while (tempA != NULL && tempB != NULL) {
//             if (tempA->val < tempB->val) {
//                 tempMerged->next = tempA;
//                 tempA = tempA->next;
//                 tempMerged = tempMerged->next;
//             } else {
//                 tempMerged->next = tempB;
//                 tempB = tempB->next;
//                 tempMerged = tempMerged->next;
//             }
//         }
//         if (tempA != NULL) {
//             tempMerged->next = tempA;
//         } else {
//             tempMerged->next = tempB;
//         }
//         return headMerged->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         if (lists.size() == 0)
//             return NULL;
//         while (lists.size() > 1) {
//             ListNode* a = lists[0];
//             lists.erase(lists.begin());
//             ListNode* b = lists[0];
//             lists.erase(lists.begin());
//             lists.push_back(merge(a, b));
//         }
//         return lists[0];
//     }
// };