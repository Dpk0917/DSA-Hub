#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode *children[26];
    bool isTerminal;

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }
};

class Trie{
    public:
    TrieNode *root;
     
    Trie(){
        root=new TrieNode('\0');
    }
    

    void insertUtil(TrieNode*root,string word){
        //base case
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        //assumption that word will be in caps case
        int index=word[0]-'A';

        TrieNode*child;
        
        //present
        if(root->children[index]!=NULL){
            child=root->children[index];

        
        }else{
            //absent
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode*root,string word){

        if(word.length()==0){
            return root->isTerminal;
        }

        int index=word[0]-'A';
        TrieNode*child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }else{
            return false;
        }

        return searchUtil(child,word.substr(1));

    }

    bool search(string word){
        return searchUtil(root,word);        
    }


//     void removeUtil(TrieNode* root, string word){
//     if(word.length() == 0)
//     {
//         root->isTerminal = false;
//         return;
//     }

//     int index = word[0] - 'A';

//     TrieNode* child = root->children[index];

//     removeUtil(child, word.substr(1));

//     if(child->isTerminal == false &&
//        hasChildren(child) == false)
//     {
//         delete child;
//         root->children[index] = NULL;
//     }
// }

};

int main(){

    Trie *t=new Trie();

    t->insertWord("HELLO");
    t->insertWord("SATVIK");
    t->insertWord("DEEPAK");
    cout<<"Present or Not : "<<t->search("HELL")<<endl;
    cout<<"Present or Not : "<<t->search("SATVIK")<<endl;
    cout<<"Present or Not : "<<t->search("DEEPAK")<<endl;



    return 0;
}