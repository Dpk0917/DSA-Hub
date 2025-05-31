/*
The structure of linked list is the following

struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
private:
    Node* FindMid(Node *head){
    Node*slow=head;
    Node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node*merge(Node*left,Node*right){

    if(left==NULL){
        return right;
    }

    if(right==NULL){
        return left;
    }

    Node*result=new Node(-1);
    Node*temp=result;

    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next=left;   //temp ke next ko value assign krdi left ki
            left=left->next;   //left ko aage badhaa diya 
        }else{
            temp->next=right;
            right=right->next;
        }
        temp=temp->next;// temp ko aage badha denge 

    }

    while(left!=NULL){
        temp->next=left;   //temp ke next ko value assign krdi left ki      
        left=left->next;   //left ko aage badhaa diya
        temp=temp->next;// temp ko aage badha denge 
    }

    while(right!=NULL){
        temp->next=right;
        right=right->next;
        temp=temp->next;// temp ko aage badha denge 
    }

    result=result->next;
    return result; 
}


  public:
    // Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        //base case for the recursion 
    if(head==NULL || head->next==NULL){
        return head;
    }

    //dividing the linked list into two halvs 
    Node*mid=FindMid(head);

    Node*left=head;
    Node*right=mid->next;

    mid->next=NULL;

    //sorting both halvs
    left=mergeSort(left);
    right=mergeSort(right);

    //merging both halvs 
    Node*ans=merge(left,right);

    return ans;
    }
};