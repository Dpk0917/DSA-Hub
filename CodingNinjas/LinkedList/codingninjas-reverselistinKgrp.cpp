/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
Node* kReverse(Node* head, int k) {
    // Base case: If the list is empty or k is 1, no reversal is needed
    if (head == nullptr || k == 1) {
        return head;
    }

    // Count the number of nodes in the list
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        current = current->next;
        count++;
    }

    // If there are fewer than k nodes, no reversal is needed
    if (count < k) {
        return head;
    }

    // Reverse the first k nodes
    Node* forward = nullptr;
    Node* curr = head;
    Node* prev = nullptr;
    count = 0;
    
    while (curr != nullptr && count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Recursively reverse the rest of the list
    if (forward != nullptr) {
        head->next = kReverse(forward, k);
    }

    return prev; // New head of the reversed portion
}
