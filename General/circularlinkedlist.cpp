#include <iostream>
#include <map>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    // Destructor
    ~Node() {
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertnode(Node* &tail, int element, int d) {
    // Inserting into an empty list
    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    } else {
        // Finding the element in the list
        Node* curr = tail;

        while (curr->data != element) {
            curr = curr->next;
        }

        // Insert new node after found element
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail) {
    if (tail == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = tail;
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node* &tail, int value) {
    if (tail == NULL) {
        cout << "Your list is empty, please check again" << endl;
        return;
    }

    Node* prev = tail;
    Node* curr = prev->next;

    while (curr->data != value) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    // If only one node is present
    if (curr == prev) {
        tail = NULL;
    }
    // If deleting the tail node
    else if (tail == curr) {
        tail = prev;
    }

    curr->next = NULL;
    delete curr;
}

bool isCircularList(Node* head) {
    if (head == NULL) {
        return false;
    }

    Node* temp = head->next;
    while (temp != NULL && temp != head) {
        temp = temp->next;
    }
    
    return (temp == head);
}

bool detectloopNode(Node* head) {
    if (head == NULL) {
        return false;
    }

    map<Node*, bool> visited;
    Node* temp = head;

    while (temp != NULL) {
        if (visited[temp] == true) {
            cout << "Cycle detected at node with data: " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) { // Ensuring fast is not NULL
        slow = slow->next;
        fast = fast->next->next; // Moving fast two steps ahead

        if (slow == fast) {
            cout<<"present at : "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

int main() {
    Node* tail = NULL;

    // Inserting elements
    insertnode(tail, 5, 9); // First insertion should insert the same element
    print(tail);

    insertnode(tail, 9, 5);
    print(tail);

    insertnode(tail, 5, 12);
    print(tail);

    insertnode(tail, 5, 10);
    print(tail);
    
    insertnode(tail, 9, 22);
    print(tail);

    // Check if list is circular
    if (isCircularList(tail)) {
        cout << "Linked list is circular" << endl;
    } else {
        cout << "Linked list is not circular" << endl;
    }

    // Check for loop detection
    if (floydDetectLoop(tail)) {
        cout << "Cycle is present" << endl;
    } else {
        cout << "No cycle" << endl;
    }

    return 0;
}