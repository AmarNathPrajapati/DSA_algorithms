#include<iostream>
using namespace std;
class TrieNode{
    public:
        char data;
        TrieNode *children[26];
        bool isTerminal;
        TrieNode(char ch){
            this->data = ch;
            for(int i = 0; i<26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
        }
};
class Trie{
    public:
        TrieNode*root;
        Trie(){
            root = new TrieNode('\0');
        }
        void insertUtil(TrieNode*root,string word){
            if(word.length()==0){
                root->isTerminal = true;
                return;
            }
            //assumption small character
            int index = word[0]-'a';//0-25
            TrieNode*child;
            if(root->children[index] != NULL){//aage badhao
                child = root->children[index];
            }else{
                child = new TrieNode(word[0]);//creation
                root->children[index] = child;//link
            }
            //recursive call
            insertUtil(child,word.substr(1));//next root and next word;
        }
        void insertWord(string word){
            insertUtil(root,word);
        }
        bool searchUtil(TrieNode*root, string word){
            if(word.length()==0){
                return root->isTerminal;
            }
            int index = word[0]-'a';
            TrieNode *child;
            if(root->children[index] != NULL){//if word is present as child move ahead
                child = root->children[index];
            }else{
                return false;//if index not null it means word is not present as child.
            }
            return searchUtil(child,word.substr(1));
        }
        bool search(string word){
            return searchUtil(root,word);
        }
        //H.W. Delete form a Trie 
};
int main(){
    Trie *t = new Trie();
    t->insertWord("abcd");
    t->insertWord("abcf");
    t->insertWord("bcf");
    t->insertWord("bcfa");
    cout<<"t->search('abcd'):  "<<t->search("abcd")<<endl;
    cout<<"t->search('bcf'):  "<<t->search("bcf")<<endl;
    cout<<"t->search('bcfb'):  "<<t->search("bcfb")<<endl;
return 0;
}
/*
Time complexity in insertion, deletion and updation takes O(l)
*/