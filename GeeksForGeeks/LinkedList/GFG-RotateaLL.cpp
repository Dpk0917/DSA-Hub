class Solution {
public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        // Step 1: find length and tail
        Node* tail = head;
        int n = 1;
        while (tail->next) {
            tail = tail->next;
            n++;
        }

        // Step 2: reduce k
        k = k % n;
        if (k == 0) return head;

        // Step 3: perform your rotation logic k times
        while (k--) {
            Node* newHead = head->next;   // second node
            tail->next = head;            // attach old head at end
            head->next = NULL;            // detach old head
            tail = head;                  // old head becomes new tail
            head = newHead;               // move head forward
        }

        return head;
    }
};
