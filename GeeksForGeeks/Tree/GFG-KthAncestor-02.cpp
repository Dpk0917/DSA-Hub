class Solution {
private:
//     void solve(BinaryTreeNode<int>* root, int k, int target, int &ans, vector<int>& path) {
//     if (root == NULL) return;

//     path.push_back(root->data);

//     if (root->data == target) {
//         int size = path.size();
//         if (size - k - 1 >= 0) {
//             ans = path[size - k - 1];
//         }
//         path.pop_back();
//         return;
//     }

//     solve(root->left, k, target, ans, path);
//     solve(root->right, k, target, ans, path);

//     path.pop_back();
// }

Node* solve(Node*root,int &k, int node){
    
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==node){
        return root;
    }
    
    Node*LeftAns=solve(root->left,k,node);
    Node*RightAns=solve(root->right,k,node);
    
    if(LeftAns!=NULL && RightAns==NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        
        
        return LeftAns;
    }
    
    if(LeftAns==NULL && RightAns!=NULL){
        k--;
        if(k==0){
            k=INT_MAX;
            return root;
        }
        
        return RightAns;
    }
    
    return NULL;
}

public:
    int kthAncestor(Node *root, int k, int node) {
        // int ans = -1;
        // vector<int> path;
        // solve(root, k, node, ans, path);
        // return ans;
        
        Node*ans=solve(root,k,node);
        if(ans==NULL){
            return -1;
        }else{
            return ans->data;
        }
        
    }
};
