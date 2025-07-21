class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;
        
        // Map: horizontal distance -> level -> list of nodes
        map<int, map<int, vector<int>>> nodes;
        queue<pair<Node*, pair<int, int>>> q;

        q.push(make_pair(root, make_pair(0, 0)));

        while (!q.empty()) {
            pair<Node*, pair<int, int>> temp = q.front();
            q.pop();

            Node* frontNode = temp.first;
            int hd = temp.second.first;  // horizontal distance
            int lvl = temp.second.second; // level

            nodes[hd][lvl].push_back(frontNode->data);

            if (frontNode->left)
                q.push(make_pair(frontNode->left, make_pair(hd - 1, lvl + 1)));

            if (frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));
        }

        // Extract answer
        for (auto &i : nodes) {
            vector<int> col;
            for (auto &j : i.second) {
                col.insert(col.end(), j.second.begin(), j.second.end());
            }
            ans.push_back(col);
        }

        return ans;
    }
};
