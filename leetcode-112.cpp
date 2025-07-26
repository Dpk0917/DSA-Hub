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
    bool solve(TreeNode* root,int sum,int targetSum,int len,int Maxlen){
        if(root==NULL){
            return false;
        }
        sum=sum+root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                return true;
            }
        }

        bool leftResult = solve(root->left, sum, targetSum, len + 1, Maxlen);
        bool rightResult = solve(root->right, sum, targetSum, len + 1, Maxlen);

        return leftResult || rightResult;
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
       
       int len=0;
       int Maxlen=INT_MIN;
       
       if(solve(root,sum,targetSum,len,Maxlen)){
            return true;
       }else{
            return false;
       }
       
    }
};