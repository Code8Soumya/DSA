#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node* links[26];
    bool flag = false;
    bool is_contains_key(char c){
        return (links[c-'a'] != NULL);
    }
    void put(char c, Node* node){
        links[c-'a'] = node;
    }
    Node* get(char c){
        return links[c-'a'];
    }
    void set_end(){
        flag = true;
    }
    bool is_end(){
        return flag;
    }
};

class Trie {
    private : 
        Node* root;
    
    public : 
        Trie() {
            root = new Node();
        }
        void insert(string word){
            Node* node = root;
            for(auto it : word){
                if(!node->is_contains_key(it)){
                    node->put(it, new Node());
                }
                node->get(it);
            }
            node->set_end();
        }
        bool search_prefix(string prefix){
            Node* node = root;
            for(auto it : prefix){
                if(!node->is_contains_key(it)){
                    return false;
                }
                node->get(it);
            }
            return true;
        }
};


int main(){
	string s = "apple";
    Trie* trie = new Trie();
    trie->insert(s);
    string p = "app";
    cout<<trie->search_prefix(p);
	return 0;
}