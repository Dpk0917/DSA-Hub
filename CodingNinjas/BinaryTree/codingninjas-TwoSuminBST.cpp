#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/
void inorder(BinaryTreeNode<int>* root,vector<int>&nums){

    if(root==NULL){
        return;
    }

    inorder(root->left,nums);
    nums.push_back(root->data);
    inorder(root->right,nums);

}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here

    vector<int>nums;
    inorder(root,nums);

    int i=0;
    int j=nums.size()-1;

    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==target){
            return true;
        }

        if(sum>target){
            j--;
        }

        if(sum<target){
            i++;
        }
    } 

    return false;

}