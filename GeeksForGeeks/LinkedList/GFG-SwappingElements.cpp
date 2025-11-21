/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
         Node*head1=head,*head2=head,*dummy=head;
        int size=0;
        while(dummy){size++;dummy=dummy->next;}
        if(k>size) return head;
        for(int i=1;i<k;i++) head1=head1->next;
        for(int i=1;i<size-k+1;i++) head2=head2->next;
        int temp=head1->data;
        head1->data=head2->data;
        head2->data=temp;
        return head;
    }
};