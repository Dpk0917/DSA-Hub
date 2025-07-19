#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    vector<int> ans;
        
    if (root == NULL) {
        return ans;
    }
        
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
        
    bool leftToRight = true;
        
    while (!q.empty()) {
        int size = q.size();
        vector<int> result(size);  // Resize to hold current level nodes
            
        // Level Processing
        for (int i = 0; i < size; i++) {
            BinaryTreeNode<int>* frontNode = q.front();
            q.pop();
                
            int index = leftToRight ? i : size - i - 1;
            result[index] = frontNode->data;
                
            if (frontNode->left) {
                q.push(frontNode->left);
            }
            if (frontNode->right) {
                q.push(frontNode->right);
            }
        }
            
        // Append current level's result to answer
        for (auto val : result) {
            ans.push_back(val);
        }
            
        // Change direction for next level
        leftToRight = !leftToRight;
    }
        
    return ans;
}
