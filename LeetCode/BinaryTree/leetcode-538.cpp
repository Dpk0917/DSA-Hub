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
    int sum = 0;

    void reverseInorder(TreeNode* root) {
        if (!root) return;

        // Traverse right first (greater values)
        reverseInorder(root->right);

        // Update current node
        sum += root->val;
        root->val = sum;

        // Traverse left (smaller values)
        reverseInorder(root->left);
    }

public:
    TreeNode* convertBST(TreeNode* root) {
        sum = 0;
        reverseInorder(root);
        return root;
    }
};
