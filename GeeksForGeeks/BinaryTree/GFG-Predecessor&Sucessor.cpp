class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        Node* pred = NULL;
        Node* succ = NULL;
        Node* temp = root;

        // Step 1: Find the key and store potential predecessors/successors
        while (temp && temp->data != key) {
            if (temp->data > key) {
                succ = temp;   // this node could be successor
                temp = temp->left;
            } else {
                pred = temp;   // this node could be predecessor
                temp = temp->right;
            }
        }

        if (!temp) return {pred, succ}; // key not found

        // Step 2: Max value in left subtree -> predecessor
        Node* leftTree = temp->left;
        while (leftTree) {
            pred = leftTree;
            leftTree = leftTree->right;
        }

        // Step 3: Min value in right subtree -> successor
        Node* rightTree = temp->right;
        while (rightTree) {
            succ = rightTree;
            rightTree = rightTree->left;
        }

        return {pred, succ};
    }
};
#include <bits/stdc++.h>