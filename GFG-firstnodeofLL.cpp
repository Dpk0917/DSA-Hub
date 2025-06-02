// User function Template for C++

/*struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution {
  public:
    Node* findFirstNode(Node* head) {
        // your code here
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        
        Node*slow=head;
        Node*fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            if(slow==fast){
                Node*ans=head;
                while(ans!=fast){
                    ans=ans->next;
                    fast=fast->next;
                    
                }
                return ans;
            }
            
        }
        return NULL;
    }
};