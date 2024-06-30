// leetcode

// class Solution {
// public:
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if (left == right)
//             return head;
//         ListNode *temp = head, *a = NULL, *b = NULL, *c = NULL, *d = NULL;
//         int n = 1;
//         while (temp) {
//             if (n == left - 1)
//                 a = temp;
//             else if (n == left)
//                 b = temp;
//             else if (n == right)
//                 c = temp;
//             else if (n == right + 1)
//                 d = temp;
//             n++;
//             temp = temp->next;
//         }
//         c->next = NULL;
//         ListNode *Prev = NULL, *Curr = b, *Next = NULL;
//         while (Curr) {
//             Next = Curr->next;
//             Curr->next = Prev;
//             Prev = Curr;
//             Curr = Next;
//         }
//         if (a != NULL) {
//             a->next = c;
//             b->next = d;
//             return head;
//         } else {
//             b->next = d;
//             return c;
//         }
//     }
// };