/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL && head->next==NULL){
            return head;
        }
        
        Node*curr=head;
        Node*prev=NULL;
        
        while(curr!=NULL &&  curr->next!=NULL){
            if(curr->data==curr->next->data){
                Node*duplicate=curr->next;
                curr->next=curr->next->next;
                delete duplicate;
            }else{
                curr=curr->next;
            }
        }
        return head;
    }
};