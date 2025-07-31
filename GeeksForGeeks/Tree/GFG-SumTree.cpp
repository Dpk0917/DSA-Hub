/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
private:
    pair<bool,int>isSumTreeFast(Node*root){
        if(root==NULL){
            pair<bool,int>p;
            p=make_pair(true,0);
            return p;
        }
        
        if(root->left==NULL &&root->right==NULL) {
            return {true, root->data};
        }
        
        pair<bool,int>leftans=isSumTreeFast(root->left);
        pair<bool,int>rightans=isSumTreeFast(root->right);
        
        bool left=leftans.first;
        bool right=rightans.first;
        
    
        bool condition=(root->data==leftans.second+rightans.second);
        pair<bool,int>ans;
        
        if(left && right && condition){
            return {true, 2 * root->data};
        } else {
            return {false, 0};
        }
        
    } 
  public:
    bool isSumTree(Node* root) {
        // Your code here
        return isSumTreeFast(root).first;
        
    }
};