
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

    bool isCBT(TreeNode* root, int index, int totalNode) {
        
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
    
    // bool isMaxOrder(TreeNode* Tree) {
        
    //     // Leaf Node
    //     if(Tree->left == NULL && Tree->right == NULL) {
    //         return true;
    //     }
        
    //     // Node has only left child
    //     if(Tree->right == NULL) {
    //         return (Tree->val >= Tree->left->val) && isMaxOrder(Tree->left);
    //     }
    //     else {
    //         bool left = isMaxOrder(Tree->left);
    //         bool right = isMaxOrder(Tree->right);
            
    //         return (left && right && 
    //                (Tree->val >= Tree->left->val) && 
    //                (Tree->val >= Tree->right->val));  
    //     }
    // }
    
    int countNode(TreeNode* tree) {
        
        if(tree == NULL) {
            return 0;
        }
        
        int ans = 1 + countNode(tree->left) + countNode(tree->right);
        
        return ans;
    }
public:
    bool isCompleteTree(TreeNode* root) {
        int totalNode = countNode(root);
        int index = 0;
        
        if(isCBT(root, index, totalNode)) {
            return true;
        }
        else {
            return false;
        }
    }
};