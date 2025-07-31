/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

// Helper function that returns height if balanced, else -1
int checkHeight(TreeNode<int>* node) {
    if (node == NULL) return 0;

    int left = checkHeight(node->left);
    if (left == -1) return -1;

    int right = checkHeight(node->right);
    if (right == -1) return -1;

    if (abs(left - right) > 1) return -1;

    return max(left, right) + 1;
}

bool isBalancedBT(TreeNode<int>* root){
    return checkHeight(root) != -1;
}
