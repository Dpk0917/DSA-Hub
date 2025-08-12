pair<int, int> predecessorSuccessor(TreeNode *root, int key) {
    int pred = -1, succ = -1;
    TreeNode *temp = root;

    // Step 1: Find the node and record potential predecessors/successors
    while (temp && temp->data != key) {
        if (temp->data > key) {
            succ = temp->data;   // current node could be successor
            temp = temp->left;
        } else {
            pred = temp->data;   // current node could be predecessor
            temp = temp->right;
        }
    }

    if (!temp) return {pred, succ}; // key not found

    // Step 2: Max value in left subtree ? predecessor
    TreeNode *leftTree = temp->left;
    while (leftTree) {
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    // Step 3: Min value in right subtree ? successor
    TreeNode *rightTree = temp->right;
    while (rightTree) {
        succ = rightTree->data;
        rightTree = rightTree->left;
    }

    return {pred, succ};
}
