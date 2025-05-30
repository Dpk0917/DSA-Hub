/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/
node* FindMid(node *head){
    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

node*merge(node*left,node*right){

    if(left==NULL){
        return right;
    }

    if(right==NULL){
        return left;
    }

    node*result=new node(-1);
    node*temp=result;

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

node* mergeSort(node *head) {
    // Write your code here.

    //base case for the recursion 
    if(head==NULL || head->next==NULL){
        return head;
    }

    //dividing the linked list into two halvs 
    node*mid=FindMid(head);

    node*left=head;
    node*right=mid->next;

    mid->next=NULL;

    //sorting both halvs
    left=mergeSort(left);
    right=mergeSort(right);

    //merging both halvs 
    node*ans=merge(left,right);

    return ans;
}
