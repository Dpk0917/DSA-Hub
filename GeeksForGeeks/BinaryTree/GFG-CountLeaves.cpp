/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
public:
void inorder(Node* root, int &count) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left, count);
   	
    //leaf node
    if(root->left == NULL && root->right == NULL) {
        count++;
    }
    
    inorder(root->right, count);

}
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        int count=0;
        inorder(root,count);
        return count;
        
    }
};