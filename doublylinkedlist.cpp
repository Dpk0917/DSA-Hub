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

void insertAtHead(Node*& head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node*& tail, Node*& head, int position, int d) {
    // Insert at start
    if (position == 1) {
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }

    // Creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout << getLength(head) << endl;

    insertAtHead(head, 9);
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 22);
    print(head);

    insertAtTail(tail, 56);
    print(head);

    insertAtTail(tail, 65);
    print(head);

    insertAtTail(tail, 88);
    print(head);

    insertAtPosition(tail, head, 8, 100);
    print(head);

    return 0;
}