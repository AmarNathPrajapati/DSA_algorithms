#include<bits/stdc++.h>
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
                return ;
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
        void printSuggestions(TrieNode *curr, vector<string> &temp, string prefix){
            if(curr->isTerminal){
                temp.push_back(prefix);
            }
            for(char ch = 'a'; ch<= 'z'; ch++){
                TrieNode*next = curr->children[ch-'a'];
                if(next != NULL){
                    prefix.push_back(ch);
                    printSuggestions(next, temp,prefix);
                    prefix.pop_back();
                }
                
            }
        }
        vector<vector<string>> getSuggestions(string str){
            TrieNode*prev= root;
            vector<vector<string>> output;
            string prefix = "";
            for(int i = 0; i<str.length(); i++){
                char lastChar = str[i];
                prefix.push_back(lastChar);
                TrieNode *curr = prev->children[lastChar-'a'];
                if(curr==NULL){
                    break;
                }
                vector<string> temp;
                printSuggestions(curr,temp,prefix);
                output.push_back(temp);
                temp.clear();
                prev = curr;
            }
            return output;
        }
};
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    //    Write your code here.
    Trie *t = new Trie();
    for(int i = 0; i<contactList.size(); i++){
        t->insertWord(contactList[i]);
    }
    return t->getSuggestions(queryStr);
}