// leetcode

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode *slow = head, *fast = head;
//         while (fast->next != NULL && fast->next->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode *Curr = slow->next, *Prev = NULL, *Next = NULL;
//         while (Curr) {
//             Next = Curr->next;
//             Curr->next = Prev;
//             Prev = Curr;
//             Curr = Next;
//         }
//         slow->next = Prev;
//         ListNode* temp = head;
//         while (Prev) {
//             if (temp->val != Prev->val)
//                 return false;
//             Prev = Prev->next;
//             temp = temp->next;
//         }
//         return true;
//     }
// };