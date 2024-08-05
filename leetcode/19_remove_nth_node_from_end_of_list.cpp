// leetcode

// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* slow = head;
//         ListNode* fast = head;
//         for(int i=1;i<=n;i++){
//             fast = fast->next;
//         }
//         if(fast == NULL){
//             head = head->next;
//             return head;
//         }
//         while(fast->next != NULL){
//             slow = slow->next;
//             fast = fast->next;
//         }
//         slow->next = slow->next->next;
//         return head;

//         // ListNode* temp = head;
//         // int len = 0;
//         // while(temp != NULL){
//         //     temp = temp->next;
//         //     len++;
//         // }
//         // if(len == n){
//         //     head = head->next;
//         //     return head;
//         // }
//         // temp = head;
//         // int idx = len - n;
//         // for(int i=0;i<idx-1;i++){
//         //     temp = temp->next;
//         // }
//         // temp->next = temp->next->next;
//         // return head;
//     }
// };