class Solution {
    private:
        Node* reverse(Node* head) {
            Node* curr = head;
            Node* prev = NULL;
            Node* next = NULL;
    
            while (curr != NULL) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
    
            return prev;
        }
    
        void insertAtTail(Node*& head, Node*& tail, int val) {
            Node* temp = new Node(val);
    
            if (head == NULL) {
                head = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }
        }
    
        Node* add(Node* num1, Node* num2) {
            int carry = 0;
    
            Node* ansHead = NULL;
            Node* ansTail = NULL;
    
            while (num1 != NULL || num2 != NULL || carry != 0) {
                int val1 = 0;
                if (num1 != NULL) {
                    val1 = num1->data;
                }
    
                int val2 = 0;
                if (num2 != NULL) {
                    val2 = num2->data;
                }
    
                int sum = val1 + val2 + carry;
                int digit = sum % 10;
    
                insertAtTail(ansHead, ansTail, digit);
                carry = sum / 10;
    
                if (num1 != NULL) {
                    num1 = num1->next;
                }
    
                if (num2 != NULL) {
                    num2 = num2->next;
                }
            }
    
            return ansHead;
        }
    
        Node* removeLeadingZeros(Node* head) {
            while (head != NULL && head->data == 0) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
    
            // If all digits were zero, return a single zero node
            if (head == NULL) return new Node(0);
    
            return head;
        }
    
    public:
        Node* addTwoLists(Node* num1, Node* num2) {
            num1 = reverse(num1);
            num2 = reverse(num2);
    
            Node* ans = add(num1, num2);
            ans = reverse(ans);
    
            // Remove leading zeros in the final answer
            ans = removeLeadingZeros(ans);
    
            return ans;
        }
    };
    