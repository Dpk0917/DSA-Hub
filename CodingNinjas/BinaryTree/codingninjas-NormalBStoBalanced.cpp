/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
    public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
void inorder(TreeNode<int>* root,vector<int>&nums){

    if(root==NULL){
        return;
    }

    inorder(root->left,nums);
    nums.push_back(root->data);
    inorder(root->right,nums);

}
TreeNode<int>* inorderToBST(int s,int e,vector<int>&nums){
    if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;

    TreeNode<int>* NewRoot=new TreeNode<int>(nums[mid]);
    NewRoot->left=inorderToBST(s,mid-1,nums);
    NewRoot->right=inorderToBST(mid+1,e,nums);

    return NewRoot;

}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int>nums;
    inorder(root,nums);

    return inorderToBST(0,nums.size()-1,nums);
}
