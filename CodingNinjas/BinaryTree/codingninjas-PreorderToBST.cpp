#include <bits/stdc++.h> 
/*
    Following is the class structure of BinaryTreeNode class for referance:

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

        ~BinaryTreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };
*/
BinaryTreeNode<int>* preorderintoBST(vector<int> &preorder,int s,int e){
    if(s>e){
        return NULL;
    }

    int mid=s+(e-s)/2;
    BinaryTreeNode<int>*root=new BinaryTreeNode<int>(preorder[mid]);

    root->left=preorderintoBST(preorder,s,mid-1);
    root->right=preorderintoBST(preorder,mid+1,e);

    return root;

    
}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    sort(preorder.begin(),preorder.end());

    return preorderintoBST(preorder,0,preorder.size()-1);

}