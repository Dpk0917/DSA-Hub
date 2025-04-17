class Solution {
    private:
    Node*getMiddle(Node*head){
        
        Node*fast=head->next;
        Node*slow=head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    
    Node*reverse(Node*head){
        Node*curr=head;
        Node*prev=NULL;
        Node*next=NULL;
        
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        return prev;
    }
    
    
    public:
    bool isPalindrome(Node *head) {
        
        //step-1: find middle element
        Node*middle=getMiddle(head);
        
        //step-2: reverse list after middle 
        Node*temp=middle->next;
        middle->next=reverse(temp);
        
        //step-3: compare both halves
        Node*head1=head;
        Node*head2=middle->next;
        while(head2!=NULL){
            if(head1->data != head2->data){
                return false;
                
            }
            head1=head1->next;
            head2=head2->next;
        }
        
        //step-4 repeat step2
        temp=middle->next;
        middle->next=reverse(temp);
        
        
        return true;
       }
    };