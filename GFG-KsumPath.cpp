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
    void solve(Node*root,int k,int &count,vector<int>&path){
        if(root==NULL){
            return;
        }
        
        path.push_back(root->data);
        
        solve(root->left,k,count,path);
        solve(root->right,k,count,path);
    
        int sum=0;
        int size=path.size();        
        for(int i=size-1;i>=0;i--){
            sum+=path[i];
            
            if(sum==k){
                count++;
            }
            
        }
        
        path.pop_back();
        
    }
  public:
    int sumK(Node *root, int k) {
        // code here
        int count=0;
        vector<int>path;
        
        solve(root,k,count,path);
        return count;
    }
};