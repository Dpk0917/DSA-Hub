/*************************************************************

    Binary Tree Node
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

*************************************************************/

// Inorder traversal (for final answer)
void inorder(vector<int>&bst, TreeNode*root) {
    if (root == NULL) return;
    inorder(bst, root->left);
    bst.push_back(root->data);
    inorder(bst, root->right);
}

// Convert BST into sorted DLL
void convertintoDLL(TreeNode *root, TreeNode *&head) {
    if (root == NULL) return;

    convertintoDLL(root->right, head);

    root->right = head;
    if (head != NULL) {
        head->left = root;
    }
    head = root;

    convertintoDLL(root->left, head);
}

// Merge two sorted DLLs
TreeNode* mergedLL(TreeNode *head1, TreeNode *head2) {
    TreeNode *head = NULL, *tail = NULL;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data < head2->data) {
            if (head == NULL) {
                head = tail = head1;
            } else {
                tail->right = head1;
                head1->left = tail;
                tail = head1;
            }
            head1 = head1->right;
        } else {
            if (head == NULL) {
                head = tail = head2;
            } else {
                tail->right = head2;
                head2->left = tail;
                tail = head2;
            }
            head2 = head2->right;
        }
    }

    while (head1 != NULL) {
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while (head2 != NULL) {
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right;
    }

    return head;   // ? Return merged DLL head
}

// Count nodes in DLL
int countNodes(TreeNode *head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->right;
    }
    return cnt;
}

// Convert sorted DLL to Balanced BST
TreeNode* sortedDLLToBST(TreeNode* &head, int n) {
    if (n <= 0 || head == NULL) return NULL;

    TreeNode *leftSub = sortedDLLToBST(head, n/2);

    TreeNode *root = head;
    root->left = leftSub;

    head = head->right;

    root->right = sortedDLLToBST(head, n - n/2 - 1);

    return root;
}

// Main merge function
vector<int> mergeBST(TreeNode *root1, TreeNode *root2) {
    TreeNode *head1 = NULL, *head2 = NULL;

    // Convert BSTs into DLLs
    convertintoDLL(root1, head1);
    convertintoDLL(root2, head2);

    // Merge DLLs
    TreeNode *mergedHead = mergedLL(head1, head2);

    // Convert merged DLL back to Balanced BST
    int n = countNodes(mergedHead);
    TreeNode *mergedBST = sortedDLLToBST(mergedHead, n);

    // Final inorder traversal result
    vector<int> ans;
    inorder(ans, mergedBST);
    return ans;
}
