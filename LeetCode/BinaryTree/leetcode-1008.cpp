// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// private:
//     TreeNode* preorderintoBST(vector<int> &preorder,int s,int e){
//     if(s>e){
//         return NULL;
//     }

//     int mid=s+(e-s)/2;
//     TreeNode* root=new TreeNode(preorder[mid]);

//     root->left=preorderintoBST(preorder,s,mid-1);
//     root->right=preorderintoBST(preorder,mid+1,e);

//     return root;

    
// }
// public:
//     TreeNode* bstFromPreorder(vector<int>& preorder) {
//     sort(preorder.begin(),preorder.end());

//     return preorderintoBST(preorder,0,preorder.size()-1);
//     }
// };

class Solution {
private:
    TreeNode* buildBST(vector<int>& preorder, int& idx, int bound) {
        if (idx == preorder.size() || preorder[idx] > bound) {
            return nullptr;
        }

        TreeNode* root = new TreeNode(preorder[idx++]);
        root->left = buildBST(preorder, idx, root->val);   // left subtree: values < root
        root->right = buildBST(preorder, idx, bound);      // right subtree: values < bound
        return root;
    }

public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int idx = 0;
        return buildBST(preorder, idx, INT_MAX);
    }
};
