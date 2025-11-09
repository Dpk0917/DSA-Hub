// User function template for C++

/*
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
class Solution {
  public:
    Node* divide(Node* head) {
        // code here
        if(!head||!head->next)return head;

        Node*curr=head;
        Node*oddHead=new Node(0);
        Node*evenHead=new Node(0);

        Node*odd=oddHead;
        Node*even=evenHead;

        while(curr!=NULL){
            if((curr->data)%2==0){
                even->next=curr;
                even=even->next;
            }else{
                odd->next=curr;
                odd=odd->next;
            }

            curr=curr->next;
        }

        odd->next=NULL;
        even->next=oddHead->next;

        return evenHead->next;
    }
};