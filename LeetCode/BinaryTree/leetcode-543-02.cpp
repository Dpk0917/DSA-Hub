/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    // int height(TreeNode* node) {
    //     // code here
    //     //  if(node==NULL){
    //     //      return -1;
    //     //  }
         
    //     //  int left=height(node->left);
    //     //  int right=height(node->right);
         
    //     // return max(left,right)+1;
    // }

    pair<int,int>diameterfirst(TreeNode* root){
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
    int diameterOfBinaryTree(TreeNode* root) {
        // if(root==NULL){
        //     return 0;
        // }
        
        // int option1=diameterOfBinaryTree(root->left);
        // int option2=diameterOfBinaryTree(root->right);
        // int option3=height(root->left)+height(root->right)+2;
        
        // int ans=max(option1,max(option2,option3));
        
        // return ans;

        return diameterfirst(root).first;
    }
};