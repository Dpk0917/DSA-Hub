/*
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
    void inorder(vector<int>&bst,Node *root){
    if(root==NULL){
        return;
    }

    inorder(bst,root->left);
    bst.push_back(root->data);
    inorder(bst,root->right);

}

vector<int>merged(vector<int>&a,vector<int>&b){
    
    vector<int>ans;

    int i=0,j=0;

    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            ans.push_back(a[i]);
            i++;
        }else{
            ans.push_back(b[j]);
            j++;

        }
    }

    while(i<a.size()){
        ans.push_back(a[i]);
        i++;
    }

    while(j<b.size()){
        ans.push_back(b[j]);
        j++;
    }

    return ans;

}
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
         vector<int>bst1,bst2;

    inorder(bst1,root1);
    inorder(bst2,root2);


    return merged(bst1,bst2);
        
    }
};