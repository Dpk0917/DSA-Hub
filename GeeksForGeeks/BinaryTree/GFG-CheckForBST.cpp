class Solution {
private:
    bool isBSTUtil(Node* root, long long minVal, long long maxVal) {
        if (root == NULL) {
            return true;
        }

        if (root->data > minVal && root->data < maxVal) {
            bool left = isBSTUtil(root->left, minVal, root->data);
            bool right = isBSTUtil(root->right, root->data, maxVal);
            return left && right;
        } else {
            return false;
        }
    }

public:
    // Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) {
        return isBSTUtil(root, LLONG_MIN, LLONG_MAX);
    }
};
