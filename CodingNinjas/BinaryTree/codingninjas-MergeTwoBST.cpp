/*************************************************************

    Following is the Binary Tree node structure:

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/
void inorder(vector<int>&bst,TreeNode*root){
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
vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // Write your code here.
    vector<int>bst1,bst2;

    inorder(bst1,root1);
    inorder(bst2,root2);


    return merged(bst1,bst2);


}