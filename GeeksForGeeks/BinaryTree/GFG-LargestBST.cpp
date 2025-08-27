/* Tree node structure used in the program
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class info {
public:
    int maxi;   // maximum value in subtree
    int mini;   // minimum value in subtree
    bool isBST; // whether this subtree is a BST
    int size;   // size of this subtree
    info() {}
    info(int maxVal, int minVal, bool bst, int sz) {
        maxi = maxVal;
        mini = minVal;
        isBST = bst;
        size = sz;
    }
};

class Solution {
    info solve(Node* root, int &ans) {
        // Base case: empty tree
        if (root == NULL) {
            return info(INT_MIN, INT_MAX, true, 0);
        }

        info left = solve(root->left, ans);
        info right = solve(root->right, ans);

        info currNode;
        currNode.size = left.size + right.size + 1;
        currNode.maxi = max(root->data, right.maxi);
        currNode.mini = min(root->data, left.mini);

        // Check BST property
        if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)) {
            currNode.isBST = true;
        } else {
            currNode.isBST = false;
        }

        // If current subtree is BST, update answer
        if (currNode.isBST) {
            ans = max(ans, currNode.size);
        }

        return currNode;
    }

  public:
    int largestBst(Node *root) {
        int ans = 0;
        solve(root, ans);
        return ans;
    }
};
