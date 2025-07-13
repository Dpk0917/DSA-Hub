/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int diameterHelper(TreeNode<int>* root, int &diameter) {
    if (root == NULL) return -1; // height in edges

    int leftHeight = diameterHelper(root->left, diameter);
    int rightHeight = diameterHelper(root->right, diameter);

    // Update diameter (in edges)
    diameter = max(diameter, leftHeight + rightHeight + 2);

    return max(leftHeight, rightHeight) + 1; // height in edges
}

int diameterOfBinaryTree(TreeNode<int> *root) {
    int diameter = 0;
    diameterHelper(root, diameter);
    return diameter;
}

