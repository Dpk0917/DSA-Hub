#include<iostream>
#include<queue>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderTraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
}

Node* deleteNode(Node* root, int d) {
    // base case
    if (root == NULL) return NULL;

    if(root->data == d) {
        // case 1: no child
        if (root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }
        // case 2: one child
        if (root->left != NULL && root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // case 3: two children
        Node* replace = root->right; // find the inorder successor
        while (replace->left != NULL) {
            replace = replace->left;
        }
        root->data = replace->data; // copy the value
        root->right = deleteNode(root->right, replace->data); // delete the inorder successor
    } else if (d < root->data) {
        root->left = deleteNode(root->left, d);
    } else {
        root->right = deleteNode(root->right, d);
    }
}

Node* insertIntoBST(Node* root, int d) {
    // base case
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    if (d > root->data) {
        // right part
        root->right = insertIntoBST(root->right, d); 
    } else {
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void takeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);
        cin >> data;
    }
}


// Inorder (LNR)
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Preorder (NLR)
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Postorder (LRN)
void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;

    cout << "Enter data to create BST (end with -1):" << endl;
    takeInput(root);

    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);
     
    cout<<"Printing in preorder"<<endl;
    preorder(root);
    
    cout<<endl;

    cout<<"Printing in order"<<endl;
    inorder(root);

    cout<<endl;

    
    cout<<"Printing PostOrder"<<endl;
    postorder(root);

    
    return 0;
}