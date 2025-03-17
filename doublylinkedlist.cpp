#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if (next != NULL) {
            next = NULL; // Avoid recursive deletion
        }
        cout << "Memory freed for node with data " << val << endl;
    }
};

// Traversing a linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Get length of linked list
int getLength(Node* head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node*& tail, Node*& head, int d) {
    // Empty list
    if (head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node*& tail, Node*& head, int d) {
    // Empty list
    if (tail == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
        return;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node*& tail, Node*& head, int position, int d) {
    // Insert at start
    if (position == 1) {
        insertAtHead(tail, head, d);
        return;
    }

    Node* temp = head;
    int count = 1;
    while (count < position - 1 && temp->next != NULL) {
        temp = temp->next;
        count++;
    }
    
    // Inserting at last position
    if (temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    // Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node*& head) {
    if (head == NULL) return; // Empty list check
    
    // Deleting first node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
        return;
    }

    // Deleting middle or last node
    Node* current = head;
    int count = 1;
    while (count < position && current != NULL) { // Fix off-by-one error
        current = current->next;
        count++;
    }
    
    if (current == NULL) return; // Prevent accessing NULL

    Node* previous = current->prev;
    previous->next = current->next;
    if (current->next != NULL) {
        current->next->prev = previous;
    }
    current->next = NULL;
    current->prev = NULL;
    delete current;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    print(head);
    cout << "Length: " << getLength(head) << endl;

    insertAtHead(tail, head, 9);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    insertAtHead(tail, head, 12);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    insertAtHead(tail, head, 22);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    insertAtTail(tail, head, 56);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    insertAtTail(tail, head, 65);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    insertAtTail(tail, head, 88);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    insertAtPosition(tail, head, 7, 100);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    deleteNode(6, head);
    print(head);
    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;

    return 0;
}
