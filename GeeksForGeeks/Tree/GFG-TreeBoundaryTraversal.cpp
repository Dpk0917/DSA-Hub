/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
private:
    void traverseToLeft(Node*root,vector<int>&ans){
        
        if(root==NULL){
            return ;    
        }
        
        if(root->left==NULL && root->right==NULL){
            return;
        
        }
        
        ans.push_back(root->data);
        
        if(root->left){
            traverseToLeft(root->left,ans);  
        }else{
            traverseToLeft(root->right,ans);
        }
    }
    
    void LeafNode(Node*root,vector<int>&ans){
         if(root==NULL){
             return;
         }
         if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
        
        }
        LeafNode(root->left,ans);
        LeafNode(root->right,ans);
        
    }
    
    void traverseToRight(Node*root,vector<int>&ans){
        if(root==NULL){
             return;
         }
         
         if(root->left==NULL && root->right==NULL){
            return;
        
        }
        
        
        if(root->right){
            traverseToRight(root->right,ans);  
        }else{
            traverseToRight(root->left,ans);
        }
        
         ans.push_back(root->data);
         
         
    }
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        ans.push_back(root->data);
        
        traverseToLeft(root->left,ans); 
        
        LeafNode(root->left,ans);
        
        LeafNode(root->right,ans);
        
        traverseToRight(root->right,ans);
        
        return ans;
    }
};