#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Build tree function (outside the class)
Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;

    // Base case
    if (data == -1) {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data for inserting in left of " << data << ": " << endl;
    root->left = buildTree(root->left);

    cout << "Enter data for inserting in right of " << data << ": " << endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node*root){
    
}
int main() {
    Node* root = NULL;

    // Creating a binary tree
    root = buildTree(root);

    return 0;
}
