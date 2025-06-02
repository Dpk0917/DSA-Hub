bool detectAndRemoveCycle(Node* head)
{
    if (head == NULL || head->next == NULL) {
        return false; // No cycle possible
    }

    Node* slow = head;
    Node* fast = head;

    // Detect cycle using Floyd's cycle detection
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            // Cycle detected
            // Remove the cycle now

            slow = head;

            // If cycle starts at head node
            if (slow == fast) {
                // Move fast until its next points to slow
                while (fast->next != slow) {
                    fast = fast->next;
                }
            } else {
                // Move slow and fast until their next pointers match
                while (slow->next != fast->next) {
                    slow = slow->next;
                    fast = fast->next;
                }
            }

            // Break the cycle
            fast->next = NULL;

            return true; // Cycle detected and removed
        }
    }

    return false; // No cycle detected
}
