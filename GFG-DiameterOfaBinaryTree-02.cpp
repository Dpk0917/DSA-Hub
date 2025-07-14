/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
private:
    pair<int,int>diameterfirst(Node* root){
        //first wala diameter
        //second wala height 
        if(root==NULL){
            pair<int,int>p=make_pair(0,0);
            return p;
        }
        
        pair<int,int>left=diameterfirst(root->left);
        pair<int,int>right=diameterfirst(root->right);
        
        int opt1=left.first;
        int opt2=right.first;
        
        int opt3=left.second+right.second;
        
        pair<int,int>ans;
        ans.first=max(opt1,max(opt2,opt3));
        
        ans.second=max(left.second,right.second)+1;
        
        return ans;
    }
  public:
    int diameter(Node* root) {
        // Your code here
        return diameterfirst(root).first;
        
    }
};