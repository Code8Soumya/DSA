// leetcode

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         // optimal solution
//         ListNode* list3 = new ListNode(-1);
//         ListNode* temp = list3;
//         int val;
//         while (list1 != NULL && list2 != NULL) {
//             if (list1->val < list2->val) {
//                 temp->next = list1;
//                 temp = temp->next;
//                 list1 = list1->next;
//             } else {
//                 temp->next = list2;
//                 temp = temp->next;
//                 list2 = list2->next;
//             }
//         }
//         if (list1 != NULL)
//             temp->next = list1;
//         else
//             temp->next = list2;
//         return list3->next;

//         // // better solution
//         // ListNode* list3 = new ListNode(-1);
//         // ListNode* temp = list3;
//         // int val;
//         // while (list1 != NULL && list2 != NULL) {
//         //     if (list1->val < list2->val) {
//         //         val = list1->val;
//         //         list1 = list1->next;
//         //     } else {
//         //         val = list2->val;
//         //         list2 = list2->next;
//         //     }
//         //     ListNode* t = new ListNode(val);
//         //     temp->next = t;
//         //     temp = t;
//         // }
//         // if (list1 != NULL) {
//         //     temp->next = list1;
//         // } else {
//         //     temp->next = list2;
//         // }
//         // return list3->next;
//     }
// };