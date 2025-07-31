class Solution {
private:
    void solve(Node* root, int k, int node, int &ans, vector<int>& path) {
        if (root == NULL) return;

        path.push_back(root->data);

        if (root->data == node) {
            int size = path.size();
            if (size - k - 1 >= 0) {
                ans = path[size - k - 1];
            }
            path.pop_back();
            return;
        }

        solve(root->left, k, node, ans, path);
        solve(root->right, k, node, ans, path);

        path.pop_back();
    }

public:
    int kthAncestor(Node *root, int k, int node) {
        int ans = -1;
        vector<int> path;
        solve(root, k, node, ans, path);
        return ans;
    }
};
