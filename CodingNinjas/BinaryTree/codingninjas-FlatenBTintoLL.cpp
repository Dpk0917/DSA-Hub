/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode
    {
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T dat)
        {
            this->data = dat;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

void flattenBinaryTree(TreeNode<int>* root)
{
    // Write your code here.
    TreeNode<int>*curr=root;
        
        while(curr!=NULL){
            if(curr->left){
                TreeNode<int>*prev=curr->left;
                while(prev->right!=NULL){
                    prev=prev->right;
                }
                prev->right=curr->right;
                curr->right=curr->left;
                
            }
            curr=curr->right;
        }
        
        // left port NULL
        curr=root;
        while(curr!=NULL){
            curr->left=NULL;
            curr=curr->right;
        }
}