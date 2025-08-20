/*
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)
        : data(val)
        , left(nullptr)
        , right(nullptr) {}
};
*/

class Solution {
    private:
        Node*inorderToBST(int s,int e,vector<int>&nums){
            if(s>e){
        return NULL;
    }
    int mid=s+(e-s)/2;

    Node* NewRoot=new Node(nums[mid]);
    NewRoot->left=inorderToBST(s,mid-1,nums);
    NewRoot->right=inorderToBST(mid+1,e,nums);

    return NewRoot;
        }
  public:
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        return inorderToBST(0,nums.size()-1,nums);
        
    }
};