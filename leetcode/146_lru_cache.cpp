// #include<bits/stdc++.h>
// using namespace std;

// class LRUCache {
// public:

//     struct Node{
//         int key, val;
//         Node* next;
//         Node* prev;
//         Node(int key, int val){
//             this->key = key;
//             this->val = val;
//             this->next = NULL;
//             this->prev = NULL;
//         }
//     };

//     int cap;
//     Node* head;
//     Node* tail;
//     map<int,Node*> mpp;

//     LRUCache(int capacity) {
//         cap = capacity;
//         head = new Node(-1, -1);
//         tail = new Node(-1, -1);
//         head->next = tail;
//         tail->prev = head;
//     }
    
//     int get(int key) {
//         if(mpp.find(key) == mpp.end()) return -1;
//         Node* temp = mpp[key];
//         delete_node(temp);
//         put_in_front(temp);
//         return temp->val;
//     }
    
//     void put_in_front(Node* node){
//         Node* next_node = head->next;
//         head->next = node;
//         next_node->prev = node;
//         node->next = next_node;
//         node->prev = head;
//     }

//     void delete_node(Node* node){
//         Node* prev_node = node->prev;
//         Node* next_node = node->next;
//         prev_node->next = next_node;
//         next_node->prev = prev_node;
//     }

//     void put(int key, int value) {
//         if(mpp.find(key) != mpp.end()){
//             Node* temp = mpp[key];
//             temp->val = value;
//             delete_node(temp);
//             put_in_front(temp);
//             return;
//         }
//         Node* temp = new Node(key, value);
//         if(cap > 0){
//             put_in_front(temp);
//             cap--;
//         }
//         else {
//             mpp.erase(tail->prev->key);
//             delete_node(tail->prev);
//             put_in_front(temp);
//         }
//         mpp[key] = temp;
//     }

//     int get_capacity(){
//         cout<<"Capacity : "<<cap<<endl;
//         cout<<"mpp : ";
//         for(auto it : mpp) cout<<it.first<<" ";
//         cout<<endl;
//         cout<<"list : ";
//         Node* temp = head;
//         while(temp){
//             cout<<temp->key<<" ";
//             temp = temp->next;
//         } 
//     }

// };

// int main(){
//     LRUCache* obj = new LRUCache(3);
//     obj->put(5, 5);
//     obj->put(6, 6);
//     obj->put(7, 7);
//     obj->put(8, 8);
//     obj->put(9, 9);
//     cout<<obj->get(8)<<endl;


//     obj->get_capacity();
//     return 0;
// }