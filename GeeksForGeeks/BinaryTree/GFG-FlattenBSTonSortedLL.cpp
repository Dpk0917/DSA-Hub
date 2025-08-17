// User function Template for C++

/* Node of the binary search tree
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
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
  public:
    Node *flattenBST(Node *root) {
        // code here
    vector<int>nums;
    inorder(root,nums);
    int n=nums.size();

    Node* NewRoot=new Node(nums[0]);
    Node*curr=NewRoot;

    for(int i=1;i<n;i++){
        
        Node*temp=new Node(nums[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;

    }

    curr->left=NULL;
    curr->right=NULL;

    return NewRoot;
        
    }
};