#include <bits/stdc++.h>
using namespace std;

/************************************************************
    Following is the TreeNode class structure
    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };
************************************************************/

void traverseToLeft(TreeNode<int>* root, vector<int>& ans) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) return;

    ans.push_back(root->val);

    if (root->left) {
        traverseToLeft(root->left, ans);
    } else {
        traverseToLeft(root->right, ans);
    }
}

void LeafNode(TreeNode<int>* root, vector<int>& ans) {
    if (root == NULL) return;

    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->val);
    }

    LeafNode(root->left, ans);
    LeafNode(root->right, ans);
}

void traverseToRight(TreeNode<int>* root, vector<int>& ans) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) return;

    if (root->right) {
        traverseToRight(root->right, ans);
    } else {
        traverseToRight(root->left, ans);
    }

    ans.push_back(root->val); // Add after recursion to reverse order
}

vector<int> boundaryTraversal(TreeNode<int>* root) {
    vector<int> ans;
    if (root == NULL) return ans;

    ans.push_back(root->val);

    traverseToLeft(root->left, ans);
    LeafNode(root->left, ans);
    LeafNode(root->right, ans);
    traverseToRight(root->right, ans);

    return ans;
}
