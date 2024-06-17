// leetcode

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         // recursive approach
//         if (head == NULL || head->next == NULL)
//             return head;
//         ListNode* newhead = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return newhead;

//         // // iterative approach
//         // ListNode* Curr = head;
//         // ListNode* Prev = NULL;
//         // ListNode* Next = NULL;
//         // while (Curr) {
//         //     Next = Curr->next;
//         //     Curr->next = Prev;
//         //     Prev = Curr;
//         //     Curr = Next;
//         // }
//         // return Prev;
//     }
// };