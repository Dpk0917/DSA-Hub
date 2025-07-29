class Solution {
private:
    int solve(TreeNode* root, int &MaxSum) {
        if (root == NULL) return 0;
        int Left = max(0, solve(root->left, MaxSum));
        int Right = max(0, solve(root->right, MaxSum));
        int sum = root->val + Left + Right;
        MaxSum = max(MaxSum, sum);
        return root->val + max(Left, Right);
    }

public:
    int maxPathSum(TreeNode* root) {
        int MaxSum = INT_MIN;
        solve(root, MaxSum);
        return MaxSum;
    }
};
