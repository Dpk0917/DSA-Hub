class Solution{
public:
    ListNode* swapNodes(ListNode* head,int k){
        ListNode*head1=head,*head2=head,*dummy=head;
        int size=0;
        while(dummy){size++;dummy=dummy->next;}
        for(int i=1;i<k;i++) head1=head1->next;
        for(int i=1;i<size-k+1;i++) head2=head2->next;
        int temp=head1->val;
        head1->val=head2->val;
        head2->val=temp;
        return head;
    }
};
