/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
private:
    int diameterHelper(Node* root, int &diameter) {
    if (root == NULL) return -1; // height in edges

    int leftHeight = diameterHelper(root->left, diameter);
    int rightHeight = diameterHelper(root->right, diameter);

    // Update diameter (in edges)
    diameter = max(diameter, leftHeight + rightHeight + 2);

    return max(leftHeight, rightHeight) + 1; // height in edges
}
         
    
  public:
    int diameter(Node* root) {
        // Your code here
    int diameter = 0;
    diameterHelper(root, diameter);
    return diameter;
        
    }
};