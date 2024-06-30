// leetcode

// class Solution {
// public:
//     void reorderList(ListNode* head) {
//         ListNode *slow = head, *fast = head;
//         while (fast->next != NULL && fast->next->next != NULL) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         ListNode *Prev = NULL, *Curr = slow->next, *Next = NULL;
//         while (Curr) {
//             Next = Curr->next;
//             Curr->next = Prev;
//             Prev = Curr;
//             Curr = Next;
//         }
//         slow->next = NULL;
//         ListNode *tempA = head, *tempB = Prev;
//         ListNode* C = new ListNode(-1);
//         ListNode* temp = C;
//         while (tempA && tempB) {
//             temp->next = tempA;
//             tempA = tempA->next;
//             temp = temp->next;

//             temp->next = tempB;
//             tempB = tempB->next;
//             temp = temp->next;
//         }
//         if (tempA)
//             temp->next = tempA;
//         head = C->next;
//     }
// };