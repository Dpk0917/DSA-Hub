/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution{
private:
    void solve(Node*root,int sum,int &Maxsum,int len,int &Maxlen){
        if(root==NULL){
            
            if(len>Maxlen){
                Maxlen=len;
                Maxsum=sum;
                
            }else if(len==Maxlen){
                Maxsum=max(sum,Maxsum);
                
            }
            
            return;
        }
        sum=sum+root->data;
        
        
        solve(root->left,sum,Maxsum,len+1,Maxlen);
        solve(root->right,sum,Maxsum,len+1,Maxlen);
        
    }
  public:
    int sumOfLongRootToLeafPath(Node *root) {
        // code here
       int sum=0;
       int Maxsum=0;
       
       int len=0;
       int Maxlen=INT_MIN;
       
       solve(root,sum,Maxsum,len,Maxlen);
       return Maxsum;
    }
};