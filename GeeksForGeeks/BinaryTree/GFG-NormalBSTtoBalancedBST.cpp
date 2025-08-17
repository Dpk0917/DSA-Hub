/*Structure of the Node of the BST is as
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
private:
    void inorder(Node* root,vector<int>&nums){

    if(root==NULL){
        return;
    }

    inorder(root->left,nums);
    nums.push_back(root->data);
    inorder(root->right,nums);

}
Node* inorderToBST(int s,int e,vector<int>&nums){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;

    Node* NewRoot=new Node(nums[mid]);
    NewRoot->left=inorderToBST(s,mid-1,nums);
    NewRoot->right=inorderToBST(mid+1,e,nums);

    return NewRoot;

}
  public:
    Node* balanceBST(Node* root) {
        // Code here
        vector<int>nums;
        inorder(root,nums);
        return inorderToBST(0,nums.size()-1,nums);
    }
};