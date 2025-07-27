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
//     void solve(TreeNode* root, int k, int &count, vector<int>& path)
// {
//         if(root==NULL){
//             return;
//         }
        
//         path.push_back(root->val);
        
//         solve(root->left,k,count,path);
//         solve(root->right,k,count,path);
    
//         int sum=0;
//         int size=path.size();        
//         for(int i=size-1;i>=0;i--){
//             sum+=path[i];
            
//             if(sum==k){
//                 count++;
//             }
            
//         }
        
//         path.pop_back();
        
//     }
// public:
//     int pathSum(TreeNode* root, int targetSum) {
//         int count=0;
//         vector<int>path;
        
//         solve(root,targetSum,count,path);
//         return count;
//     }
// };

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
    void solve(TreeNode* root, int k, int &count, unordered_map<long, int>& prefix, long current) {
        if(root == nullptr) return;
        
        current += root->val;
        
        // Check if (current - k) exists in prefix sums
        if(prefix.find(current - k) != prefix.end()) {
            count += prefix[current - k];
        }
        
        // Update the prefix sum map
        prefix[current]++;
        
        // Recurse left and right
        solve(root->left, k, count, prefix, current);
        solve(root->right, k, count, prefix, current);
        
        // Backtrack: remove current sum from prefix sums
        prefix[current]--;
    }
    
public:
    int pathSum(TreeNode* root, int targetSum) {
        int count = 0;
        unordered_map<long, int> prefix;
        prefix[0] = 1;  // To handle paths starting from root
        solve(root, targetSum, count, prefix, 0);
        return count;
    }
};

