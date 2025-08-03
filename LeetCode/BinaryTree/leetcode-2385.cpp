/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    // Step 1: Create parent mapping and find target node
    TreeNode* CreateMappingToParents(TreeNode* root, int target, map<TreeNode*, TreeNode*>& nodeToParent) {
        TreeNode* result = nullptr;
        queue<TreeNode*> q;
        q.push(root);
        nodeToParent[root] = nullptr;

        while (!q.empty()) {
            TreeNode* front = q.front();
            q.pop();

            if (front->val == target) {
                result = front;
            }

            if (front->left) {
                nodeToParent[front->left] = front;
                q.push(front->left);
            }

            if (front->right) {
                nodeToParent[front->right] = front;
                q.push(front->right);
            }
        }

        return result;
    }

    // Step 2: Simulate burning process using BFS
    int burnTree(TreeNode* root, map<TreeNode*, TreeNode*>& nodeToParent) {
        map<TreeNode*, bool> visited;
        queue<TreeNode*> q;

        q.push(root);
        visited[root] = true;

        int time = 0;

        while (!q.empty()) {
            int size = q.size();
            bool flag = false;

            for (int i = 0; i < size; ++i) {
                TreeNode* front = q.front();
                q.pop();

                if (front->left && !visited[front->left]) {
                    flag = true;
                    q.push(front->left);
                    visited[front->left] = true;
                }

                if (front->right && !visited[front->right]) {
                    flag = true;
                    q.push(front->right);
                    visited[front->right] = true;
                }

                TreeNode* parent = nodeToParent[front];
                if (parent && !visited[parent]) {
                    flag = true;
                    q.push(parent);
                    visited[parent] = true;
                }
            }

            if (flag) {
                ++time;
            }
        }

        return time;
    }

public:
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*, TreeNode*> nodeToParent;
        TreeNode* targetNode = CreateMappingToParents(root, start, nodeToParent);
        return burnTree(targetNode, nodeToParent);
    }
};
