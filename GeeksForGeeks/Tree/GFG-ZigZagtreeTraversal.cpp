class Solution {
  public:
    vector<int> zigZagTraversal(Node* root) {
        vector<int> ans;
        
        if (root == NULL) {
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        
        bool leftToRight = true;
        
        while (!q.empty()) {
            int size = q.size();
            vector<int> result(size);  // Resize to hold current level nodes
            
            // Level Processing
            for (int i = 0; i < size; i++) {
                Node* frontNode = q.front();
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
};
