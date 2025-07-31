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
    pair<bool,int>isSumTreeFast(TreeNode*root){
        if(root==NULL){
            pair<bool,int>p;
            p=make_pair(true,0);
            return p;
        }
        
        if(root->left==NULL &&root->right==NULL) {
            return {true, root->val};
        }
        
        pair<bool,int>leftans=isSumTreeFast(root->left);
        pair<bool,int>rightans=isSumTreeFast(root->right);
        
        bool left=leftans.first;
        bool right=rightans.first;
        
    
        bool condition=(root->val==leftans.second+rightans.second);
        pair<bool,int>ans;
        
        if(left && right && condition){
            return {true, 2 * root->val};
        } else {
            return {false, 0};
        }
    }
public:
    bool checkTree(TreeNode* root) {
        return isSumTreeFast(root).first;
    }
};