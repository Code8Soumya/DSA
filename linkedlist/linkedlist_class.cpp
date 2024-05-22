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

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void InsertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void InsertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void InsertAt(int idx, int val){
        if(idx >= size) InsertAtTail(val);
        else if(idx <= 0) InsertAtHead(val);
        else{
            Node* temp = new Node(val);
            Node* tillbeforeidx = head;
            for(int i=0;i<idx-1;i++){
                tillbeforeidx = tillbeforeidx->next;
            }
            temp->next = tillbeforeidx->next;
            tillbeforeidx->next = temp;
            size++;
        }
    }
    void DeleteAtHead(){
        if(size == 0) cout<<"LinkedList is already empty!!";
        else if(size == 1){
            head = tail = NULL;
            size--;
        }
        else{
            head = head->next;
            size--;
        }
    }
    void DeleteAtTail(){
        if(size == 0) cout<<"LinkedList is already empty!!";
        else if(size == 1){
            head = tail = NULL;
            size--;
        }
        else{
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void DeleteAt(int idx){
        if(idx >= size) DeleteAtTail();
        else if(idx <= 0) DeleteAtHead();
        else{
            Node* temp = head;
            for(int i=0;i<idx-1;i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
    int length(){
        return size;
    }
};

int main(){
    LinkedList ll;
    ll.InsertAtTail(10);
    ll.InsertAtTail(20);
    ll.InsertAtTail(30);
    ll.InsertAtHead(-10);
    ll.InsertAtHead(-20);
    ll.InsertAtHead(-30);
    ll.display();
    cout<<endl<<ll.length()<<endl;
    ll.InsertAt(2,333);
    ll.display();
    cout<<endl<<ll.length()<<endl;
    ll.DeleteAtHead();
    ll.display();
    cout<<endl<<ll.length()<<endl;
    ll.DeleteAtTail();
    ll.display();
    cout<<endl<<ll.length()<<endl;
    ll.DeleteAt(2);
    ll.display();
    cout<<endl<<ll.length()<<endl;
    return 0;
}