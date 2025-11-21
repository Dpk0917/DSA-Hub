/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

/* Should return true if linked list is circular, else false */
class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
        
        if (head == NULL)
            return true;

        Node* temp = head->next;

        // Traverse until we reach head or NULL
        while (temp != NULL && temp != head) {
            temp = temp->next;
        }

        // If we reached head → circular
        return (temp == head);
        
        
        
    }
};