#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
// Node<int>* solve(Node<int>* first, Node<int>* second){
    
    //if only one elment is present
    // if(first->next==NULL){
    //     first->next=second;
    //     return first;
    // }

    // Node<int>*curr1=first;
    // Node<int>*next1=curr1->next;
    // Node<int>*curr2=second;
    // Node<int>*next2=curr2->next;

    // while(next1!=NULL && curr2!=NULL){
    //     if((curr2->data>=curr1->data) && (curr2->data<=next1->data)){
    //         //node addition
    //         curr1->next=curr2;
    //         next2=curr2->next;
    //         curr2->next=next1;

    //         //update pointer
    //         curr1=curr2;
    //         curr2=next2;  

    //     }else{
    //         //curr1 aur next1 ko aage badhana hoga
    //         curr1=curr1->next;
    //         next1=next1->next; 

    //         if(next1==NULL){
    //             curr1->next=curr2;
    //             return first;
    //     }

    //     }
    // }
    // return first;
// }

    Node<int>*mergesort(Node<int>*left,Node<int>*right){
        if(left==NULL){
            return right; 
        }
        
        if(right==NULL){
            return left;
        }
        
        Node<int>*ans=new Node<int>(-1);
        Node<int>*temp=ans;
        
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
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    // if(first==NULL){
    //     return second;
    // }
    // if(second==NULL){
    //     return first;
    // }

    // if(first->data<=second->data){
    //     return solve(first,second);
    // }else{
    //     return solve(second,first);
    // }

    if(first==NULL){
            return first;
            
        }
        
        if(second==NULL){
            return second;
            
        }
        
        Node<int>*result=mergesort(first,second);
        
        return result;

}
