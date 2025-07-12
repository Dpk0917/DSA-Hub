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
    void sumLeaves(TreeNode*root,int &sum){
        if(root==nullptr){
            return;
        }

        sumLeaves(root->left,sum);
        
        if (root->left && root->left->left == nullptr && root->left->right == nullptr){
            sum+=root->left->val;
        }

        sumLeaves(root->right,sum);

    }

public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;

        sumLeaves(root,sum);
        return sum;
    }
};