#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root,vector<int>&nums){

    if(root==NULL){
        return;
    }

    inorder(root->left,nums);
    nums.push_back(root->data);
    inorder(root->right,nums);

}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int>nums;
    inorder(root,nums);
    int n=nums.size();

    TreeNode<int>* NewRoot=new TreeNode<int>(nums[0]);
    TreeNode<int>* curr=NewRoot;

    for(int i=1;i<n;i++){
        
        TreeNode<int>*temp=new TreeNode<int>(nums[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;

    }

    curr->left=NULL;
    curr->right=NULL;

    return NewRoot;
}
