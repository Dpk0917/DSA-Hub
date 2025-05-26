/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);

        // Case 1: Empty list
        if (head == NULL) {
            newNode->next = newNode;
            return newNode;
        }

        Node* curr = head;

        // Case 2: Insert before head (new min or max wrap)
        if (data <= head->data) {
            // Find last node
            while (curr->next != head) {
                curr = curr->next;
            }
            curr->next = newNode;
            newNode->next = head;
            return newNode;  // new node becomes new head
        }

        // Case 3: Insert in middle or end
        Node* prev = head;
        curr = head->next;

        while (curr != head && curr->data < data) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = newNode;
        newNode->next = curr;

        return head;
    }
};
