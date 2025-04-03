#include<bits/stdc++.h>
using namespace std;

int isSumProperty(Node *node){
    if(node>left == NULL && node->right == NULL) return;
    int childSum = 0;
    if(node->left) childSum += node->left->data;
    if(node->right) childSum += node->right->data;
    if(childSum < node->data){
        if(node->left) node->left->data = node->data;
        if(node->right) node->right->data = node->data;
    }
    isSumProperty(node->left);
    isSumProperty(node->right);
}

int main(){
    
}