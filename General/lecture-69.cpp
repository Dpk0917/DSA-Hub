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