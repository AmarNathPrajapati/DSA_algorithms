//implement a Trie
//create a class for treeNode
//implement the trie class
//implement the operetions like insert and delete
#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        //required three parameter
        char data;
        TrieNode*children[26];
        bool isTerminal;
        TrieNode(char ch){
            this->data = ch;
            for(int i = 0; i<26; i++){
                this->children[i] = NULL;
            }
            this->isTerminal = false;
        }
};
class Trie{
    //insert the word
    public:
        TrieNode*root;
        Trie(){
            root = new TrieNode('\0');
        }
        void insertUtil(TrieNode*root,int )
};