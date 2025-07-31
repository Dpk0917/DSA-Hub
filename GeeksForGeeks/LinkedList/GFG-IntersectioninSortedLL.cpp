/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        
        Node*curr1=head1;
        Node*curr2=head2;
        
        Node*head=new Node(0);
        Node*temp=head;
        
        while(curr1!=NULL && curr2!=NULL){
                if(curr1->data==curr2->data){
                    temp->next=new Node(curr1->data);
                    temp=temp->next;
                    curr2=curr2->next;
                    curr1=curr1->next;
                }else if(curr1->data < curr2->data){
                    curr1=curr1->next;
                }else{
                    curr2=curr2->next;
                }
            }
            head=head->next;
        
        return head;
            
        }
        
    };