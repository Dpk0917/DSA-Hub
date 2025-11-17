class Solution {
private:
    void insertAtTail(Node*& head, Node*& tail, int data) {
        Node* temp = new Node(data);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }

    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node* add(Node* l1, Node* l2) {
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int val1 = 0;
            if (l1 != NULL) val1 = l1->data;
            int val2 = 0;
            if (l2 != NULL) val2 = l2->data;
            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            insertAtTail(ansHead, ansTail, digit);
            carry = sum / 10;
            if (l1 != NULL) l1 = l1->next;
            if (l2 != NULL) l2 = l2->next;
        }
        return ansHead;
    }

public:
    Node* addTwoLists(Node* head1, Node* head2) {
        Node* l1 = reverseList(head1);
        Node* l2 = reverseList(head2);
        Node* ans = add(l1, l2);
        ans = reverseList(ans);
        while (ans != NULL && ans->data == 0) {
            Node* temp = ans;
            ans = ans->next;
            delete temp;
        }
        if (ans == NULL) return new Node(0);
        return ans;
    }
};
