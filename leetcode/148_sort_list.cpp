// leetcode

// class Solution {
// public:
//     ListNode* merge(ListNode*& head) {
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode* fast = head;
//         ListNode* slow = head;
//         while (fast->next != NULL && fast->next->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode* head1 = merge(slow->next);
//         slow->next = NULL;
//         ListNode* head2 = merge(head);
//         ListNode* temphead = new ListNode(-1);
//         ListNode* t = temphead;
//         while (head1 != NULL && head2 != NULL) {
//             if (head1->val < head2->val) {
//                 t->next = head1;
//                 t = t->next;
//                 head1 = head1->next;
//             } else {
//                 t->next = head2;
//                 t = t->next;
//                 head2 = head2->next;
//             }
//         }
//         if (head1 != NULL)
//             t->next = head1;
//         else
//             t->next = head2;
//         return temphead->next;
//     }
//     ListNode* sortList(ListNode* head) { return merge(head); }
// };