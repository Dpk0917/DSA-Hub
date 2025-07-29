#include <bits/stdc++.h> 
using namespace std;

/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>
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

*************************************************************/

void solve(BinaryTreeNode<int>* root, int k, int node, int &ans, vector<int>& path) {
    if (root == NULL) return;

    path.push_back(root->data);

    if (root->data == node) {
        int size = path.size();
        if (size - k - 1 >= 0) {
            ans = path[size - k - 1];
        }
        path.pop_back();
        return;
    }

    solve(root->left, k, node, ans, path);
    solve(root->right, k, node, ans, path);

    path.pop_back();
}

int findKthAncestor(BinaryTreeNode<int> *root, int targetNodeVal, int k) {
    int ans = -1;
    vector<int> path;
    solve(root, k, targetNodeVal, ans, path);
    return ans;
}
