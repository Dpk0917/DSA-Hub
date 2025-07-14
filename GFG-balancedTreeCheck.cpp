/* A binary tree node structure

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
    int height(Node* node) {
        // code here
         if(node==NULL){
             return -1;
         }
         
         int left=height(node->left);
         int right=height(node->right);
         
         int ans=max(left,right)+1;
         
         return ans;
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        if(root==NULL){
            return true;
        }

        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);  
        
        bool diff = abs(height(root->left) - height(root->right)) <= 1;
        
        if(left && right && diff){
            return true;
        }else{
            return false;
        }
        
    }
};