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
    void inorder(vector<int>&bst,TreeNode*root){
    if(root==NULL){
        return;
    }

    inorder(bst,root->left);
    bst.push_back(root->val);
    inorder(bst,root->right);

}

vector<int>merged(vector<int>&a,vector<int>&b){
    
    vector<int>ans;

    int i=0,j=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(b[j]);
            j++;

        }
    }

    while(i<a.size()){
        ans.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        ans.push_back(b[j]);
        j++;
    }

    return ans;

}
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<int>bst1,bst2;

    inorder(bst1,root1);
    inorder(bst2,root2);


    return merged(bst1,bst2);
    }
};