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
    bool solve(TreeNode*left,TreeNode*right){

        if(left==NULL && right==NULL){
            return true;

        }

        if (left == NULL && right != NULL) {
        return false;
    }

    if (left != NULL && right == NULL) {
        return false;
    }

    // Case 3: both exist but values are different → not symmetric
    if (left->val != right->val) {
        return false;
    }

    // Case 4: values are same → check children in mirror way
    bool outside = solve(left->left, right->right);   // compare outer children
    bool inside  = solve(left->right, right->left);   // compare inner children

    // Final result = both must be true
    if (outside && inside) {
        return true;
    } else {
        return false;
    }

    }
public:
    bool isSymmetric(TreeNode* root) {

        if(root==NULL){
            return true;
        }

        return solve(root->left,root->right);
    }
};