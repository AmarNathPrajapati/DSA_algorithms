#include<bits/stdc++.h>
// using trie (Time limit exceed)
class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        int childCount;
        bool isTerminal;
        TrieNode(char ch){
            this->data = ch;
            for(int i = 0; i<26; i++){
                children[i] = NULL;
            }
            childCount = 0;
            isTerminal = false;
        }
};
class Trie{
    public:
        TrieNode*root;
        Trie(char ch){
            root = new TrieNode(ch);
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
                root->childCount++;
                child = new TrieNode(word[0]);//creation
                root->children[index] = child;//link
            }
            //recursive call
            insertUtil(child,word.substr(1));//next root and next word;
        }
        void insertWord(string word){
            insertUtil(root,word);
        }
        void lcp(string str, string &ans){
            for (int i = 0; i<str.length();i++){
                char ch = str[i];
                if(root->childCount==1){
                    ans.push_back(ch);
                    int index = ch-'a';
                    root = root->children[index];
                }else{
                    break;
                }
                if(root->isTerminal){
                    break;
                }
            }
        }
};
string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie *t = new Trie('\0');
    for(int i = 0; i<n; i++){
        t->insertWord(arr[i]);
    }
    string first = arr[0];
    string ans = "";
    t->lcp(first,ans);
    return ans;
}
// Write your code here
    //approach 1 accepted
    string ans = "";
    for(int i = 0; i<arr[0].length(); i++){
        char ch = arr[0][i];
        bool match = false;
        for(int j = 1; j<n; j++){//for next string
            if(arr[j].size()<i || ch != arr[j][i]){
                match = false;
                break;
            }else{
                match = true;
            }
        }
        if(match == false){
            break;
        }else{
            ans.push_back(ch);
        }
    }
    return ans;
    