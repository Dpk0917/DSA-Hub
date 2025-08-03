class Solution {
  public:

  // Step 1: Map child to parent and find target node
  Node* CreateMappingToParents(Node* root, int target, map<Node*, Node*>& nodeToParent) {
      Node* result = NULL;
      queue<Node*> q;
      q.push(root);
      nodeToParent[root] = NULL;

      while (!q.empty()) {
          Node* front = q.front();
          q.pop();

          if (front->data == target) {
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
  int burnTree(Node* root, map<Node*, Node*>& nodeToParent) {
      map<Node*, bool> visited;
      queue<Node*> q;

      q.push(root);
      visited[root] = true;

      int ans = 0;

      while (!q.empty()) {
          bool flag = false;
          int size = q.size();

          for (int i = 0; i < size; i++) {
              Node* front = q.front();
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

              if (nodeToParent[front] && !visited[nodeToParent[front]]) {
                  flag = true;
                  q.push(nodeToParent[front]);
                  visited[nodeToParent[front]] = true;
              }
          }

          if (flag) {
              ans++;
          }
      }

      return ans;
  }

  // Main function
  int minTime(Node* root, int target) {
      map<Node*, Node*> nodeToParent;
      Node* targetNode = CreateMappingToParents(root, target, nodeToParent);
      return burnTree(targetNode, nodeToParent);
  }
};
