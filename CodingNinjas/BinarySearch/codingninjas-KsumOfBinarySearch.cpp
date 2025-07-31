#include <bits/stdc++.h>
using namespace std;

/************************************************************

    Following is the Binary Tree node structure.

    template <typename T>
    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

void solve(BinaryTreeNode<int>* root, int k, vector<int>& path, vector<vector<int>>& result) {
    if (root == NULL)
        return;

    path.push_back(root->data);

    // Recurse left and right
    solve(root->left, k, path, result);
    solve(root->right, k, path, result);

    // Check from end of path for sum k
    int sum = 0;
    vector<int> temp;
    for (int i = path.size() - 1; i >= 0; i--) {
        sum += path[i];
        temp.insert(temp.begin(), path[i]);
        if (sum == k) {
            result.push_back(temp);
        }
    }

    path.pop_back(); // backtrack
}

vector<vector<int>> kPathSum(BinaryTreeNode<int> *root, int k) {
    vector<vector<int>> result;
    vector<int> path;
    solve(root, k, path, result);
    return result;
}
