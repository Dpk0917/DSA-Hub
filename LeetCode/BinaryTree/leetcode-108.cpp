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
TreeNode*ToBST(int s,int e,vector<int>nums){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;

    TreeNode*curr=new TreeNode(nums[mid]);
    curr->left=ToBST(s,mid-1,nums);
    curr->right=ToBST(mid+1,e,nums);

    return curr;
}
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
    int n=nums.size()-1;
    return ToBST(0,n,nums);
    }
};