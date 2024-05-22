#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     a.next = &b;
//     b.next = &c;
//     cout<<a.val<<endl;
//     cout<<&a<<endl;
//     cout<<&a.val<<endl;
//     cout<<&b<<endl;
//     cout<<&(b.val)<<endl;
//     cout<<a.next<<endl;
//     cout<<(*(a.next)).val<<endl;
//     cout<<a.next->val<<endl;
//     cout<<(*(*(a.next)).next).val<<endl;
//     cout<<a.next->next->val<<endl;
//     cout<<endl<<endl;
//     Node temp = a;
//     while(true){
//         cout<<temp.val<<" ";
//         if(temp.next == NULL) break;
//         temp = *(temp.next);
//     }
//     return 0;
// }

void rec_display(Node* head){
    if(head == NULL) return;
    cout<<head->val<<" ";
    rec_display(head->next);
}
void rev_display(Node* head){
    if(head == NULL) return;
    rev_display(head->next);
    cout<<head->val<<" ";
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void size(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp!=NULL){
        len += 1;
        temp = temp->next;
    }
    cout<<len<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    // cout<<a->next->next->val<<endl;
    display(a);
    rec_display(a);
    cout<<endl;
    rev_display(a);
    cout<<endl;
    size(a);
    return 0;
}