#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
       public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() 
        {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

bool isCBT(BinaryTreeNode<int>* root, int index, int totalNode) {
        
        if(root == NULL) {
            return true;
        }
        
        if(index >= totalNode) {
            return false;
        }
        else {
            bool left = isCBT(root->left, 2*index + 1, totalNode);
            bool right = isCBT(root->right, 2*index + 2, totalNode);
            
            return (left && right);
        }
    }
    
bool isMaxOrder(BinaryTreeNode<int>* root) {
    // leaf node
    if(root->left == NULL && root->right == NULL) {
        return true;
    }

    // only left child
    if(root->right == NULL) {
        return (root->data >= root->left->data) && isMaxOrder(root->left);
    }

    // both children
    bool left = isMaxOrder(root->left);
    bool right = isMaxOrder(root->right);

    return (left && right &&
            (root->data >= root->left->data) &&
            (root->data >= root->right->data));
}

 int countNode(BinaryTreeNode<int>* tree) {
        
        if(tree == NULL) {
            return 0;
        }
        
        int ans = 1 + countNode(tree->left) + countNode(tree->right);
        
        return ans;
    }
    
bool isBinaryHeapTree(BinaryTreeNode<int>* root) 
{
    // Write your code here.
    int totalNode = countNode(root);
        int index = 0;
        
        if(isCBT(root, index, totalNode) && (isMaxOrder(root))) {
            return true;
        }
        else {
            return false;
        }
}