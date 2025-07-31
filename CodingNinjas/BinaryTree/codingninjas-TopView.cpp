#include <map>
#include <queue>
#include <vector>


vector<int> getTopView(TreeNode<int> *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    map<int, int> topNode; // hd -> node->data
    queue<pair<TreeNode<int>*, int>> q; // node pointer, horizontal distance

    q.push(make_pair(root, 0));

    while (!q.empty()) {
        pair<TreeNode<int>*, int> temp = q.front();
        q.pop();

        TreeNode<int>* frontNode = temp.first;
        int hd = temp.second;

        // if this horizontal distance is not already present, insert it
        if (topNode.find(hd) == topNode.end())
            topNode[hd] = frontNode->data;

        if (frontNode->left)
            q.push(make_pair(frontNode->left, hd - 1));
        if (frontNode->right)
            q.push(make_pair(frontNode->right, hd + 1));
    }

    // extract result from map (left to right)
    for (auto i : topNode) {
        ans.push_back(i.second);
    }

    return ans;
}
