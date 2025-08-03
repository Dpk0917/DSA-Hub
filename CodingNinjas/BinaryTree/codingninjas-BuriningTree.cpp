/************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) 
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

#include <map>
#include <queue>
using namespace std;

BinaryTreeNode<int>* createParentMapping(BinaryTreeNode<int>* root, int start, map<BinaryTreeNode<int>*, BinaryTreeNode<int>*>& parentMap) {
    BinaryTreeNode<int>* targetNode = NULL;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    parentMap[root] = NULL;

    while (!q.empty()) {
        BinaryTreeNode<int>* current = q.front();
        q.pop();

        if (current->data == start) {
            targetNode = current;
        }

        if (current->left) {
            parentMap[current->left] = current;
            q.push(current->left);
        }

        if (current->right) {
            parentMap[current->right] = current;
            q.push(current->right);
        }
    }

    return targetNode;
}

int burnTree(BinaryTreeNode<int>* root, map<BinaryTreeNode<int>*, BinaryTreeNode<int>*>& parentMap) {
    map<BinaryTreeNode<int>*, bool> visited;
    queue<BinaryTreeNode<int>*> q;

    q.push(root);
    visited[root] = true;

    int time = 0;

    while (!q.empty()) {
        int size = q.size();
        bool spread = false;

        for (int i = 0; i < size; i++) {
            BinaryTreeNode<int>* current = q.front();
            q.pop();

            if (current->left && !visited[current->left]) {
                q.push(current->left);
                visited[current->left] = true;
                spread = true;
            }

            if (current->right && !visited[current->right]) {
                q.push(current->right);
                visited[current->right] = true;
                spread = true;
            }

            BinaryTreeNode<int>* parent = parentMap[current];
            if (parent && !visited[parent]) {
                q.push(parent);
                visited[parent] = true;
                spread = true;
            }
        }

        if (spread) time++;
    }

    return time;
}

int timeToBurnTree(BinaryTreeNode<int>* root, int start) {
    map<BinaryTreeNode<int>*, BinaryTreeNode<int>*> parentMap;
    BinaryTreeNode<int>* targetNode = createParentMapping(root, start, parentMap);
    return burnTree(targetNode, parentMap);
}
