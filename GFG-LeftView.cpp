/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */
// #include<bits?stdc++.h>

class Solution {
private:
void solve(Node* root,vector<int>&ans,int level){
        if(root==NULL){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->data);
        }

        
        solve(root->left,ans,level+1);
        solve(root->right,ans,level+1);
        
    }
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int>ans;
        solve(root,ans,0);
  

        return ans;
    }
};