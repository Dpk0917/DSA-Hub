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
  private:
    Node*mergesort(Node*left,Node*right){
        if(left==NULL){
            return right; 
        }
        
        if(right==NULL){
            return left;
        }
        
        Node*ans=new Node(-1);
        Node*temp=ans;
        
        while(left!=NULL && right!=NULL){
            if(left->data <= right->data){
                temp->next=left;
                left=left->next;
            }else{
                temp->next=right;
                right=right->next;
            }
            temp=temp->next;
        }
        
        if(left!=NULL){
            temp->next=left;
            left=left->next;
            temp=temp->next;
        }
        
        if(right!=NULL){
            temp->next=right;
            right=right->next;
            temp=temp->next;
        }
        
        ans=ans->next;
        
        return ans;
    }
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if(head1==NULL){
            return head2;
            
        }
        
        if(head2==NULL){
            return head1;
            
        }
        
        Node*result=mergesort(head1,head2);
        
        return result;
    }
};