class Solution {
    private:
    ListNode*Getmiddle(ListNode*head){
    
        ListNode*fast=head->next;
        ListNode*slow=head;
    
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    ListNode*reverse(ListNode*temp){
        ListNode*curr=temp;
        ListNode*prev=NULL;
        ListNode*next=NULL;
    
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    public:
    bool isPalindrome(ListNode* head) {
    
        ListNode*middle=Getmiddle(head);
    
        ListNode*temp=middle->next;
        middle->next=reverse(temp);
    
        ListNode*head1=head;
        ListNode*head2=middle->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
    
        }
        temp=middle->next;
        middle->next=reverse(temp);
    
        return true;
    }
    };