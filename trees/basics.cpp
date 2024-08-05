#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}

int sum(Node* root){
    if(root==NULL) return 0;
    int left_sum = 0, right_sum = 0, total = 0;
    left_sum = sum(root->left);
    right_sum = sum(root->right);
    total = left_sum + right_sum + root->val;
    return total;
}

int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}

int max_val(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val, max(max_val(root->left), max_val(root->right)));
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    cout<<"tree : ";
    display(a);
    cout<<endl;
    cout<<"size : "<<size(a)<<endl;
    cout<<"sum : "<<sum(a)<<endl;
    cout<<"max value : "<<max_val(a)<<endl;
    return 0;
}