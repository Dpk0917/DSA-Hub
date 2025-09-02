// Structure of node
/*class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
private:

    bool isCBT(Node* root, int index, int totalNode) {
        
        if(root == NULL) {
            return true;
        }
        
        if(index >= totalNode) {
            return false;
        }
        else {
            bool left = isCBT(root->left, 2*index + 1, totalNode);
            bool right = isCBT(root->right, 2*index + 2, totalNode);
            
            return (left && right);
        }
    }
    
    bool isMaxOrder(Node* Tree) {
        
        // Leaf Node
        if(Tree->left == NULL && Tree->right == NULL) {
            return true;
        }
        
        // Node has only left child
        if(Tree->right == NULL) {
            return (Tree->data >= Tree->left->data) && isMaxOrder(Tree->left);
        }
        else {
            bool left = isMaxOrder(Tree->left);
            bool right = isMaxOrder(Tree->right);
            
            return (left && right && 
                   (Tree->data >= Tree->left->data) && 
                   (Tree->data >= Tree->right->data));  
        }
    }
    
    int countNode(Node* tree) {
        
        if(tree == NULL) {
            return 0;
        }
        
        int ans = 1 + countNode(tree->left) + countNode(tree->right);
        
        return ans;
    }
    
public:
    bool isHeap(Node* tree) {
        
        int totalNode = countNode(tree);
        int index = 0;
        
        if(isCBT(tree, index, totalNode) && isMaxOrder(tree)) {
            return true;
        }
        else {
            return false;
        }
    }
};
