#include <iostream>
using namespace std;

class Stack {
private:
    // Define the node inside the stack class
    class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

    Node* topNode;

public:
    Stack() {
        topNode = nullptr;
    }

    // Push operation
    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = topNode;
        topNode = newNode;
    }

    // Pop operation
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    // Peek operation
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return topNode->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topNode == nullptr;
    }

    // Display stack
    void display() {
        Node* temp = topNode;
        cout << "Stack (Top to Bottom): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to clean up memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Main function to test
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display(); // Output: Stack (Top to Bottom): 30 20 10

    cout << "Top element: " << s.top() << endl;

    s.pop();
    s.display(); // Output: Stack (Top to Bottom): 20 10

    return 0;
}
