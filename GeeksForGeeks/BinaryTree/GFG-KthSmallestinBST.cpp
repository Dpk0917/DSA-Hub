/*Complete the function below

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

class Solution {
private:
    int solve(Node *root,int &i, int k){

    // base case
    if(root==NULL){
        return -1;
    }

    //L
    int left=solve(root->left,i,k);

    if(left != -1){
        return left;
    }

    // N
    i++;
    if(i==k){
        return root->data;
    }

    // R
    return solve(root->right,i,k);

}
  public:
    // Return the Kth smallest element in the given BST
    int kthSmallest(Node *root, int k) {
        // add code here.
        int i=0;
    return solve(root,i,k);
    }
};