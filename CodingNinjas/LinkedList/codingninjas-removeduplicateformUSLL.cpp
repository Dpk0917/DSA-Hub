#include <bits/stdc++.h> 
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL){
        return NULL;
    }

    Node*current=head;

    while(current!=NULL){
        Node*prev=current;
        Node*temp=current->next;
        while(temp!=NULL){
            if(current->data==temp->data){
                prev->next=temp->next;
                delete temp;
                temp=prev->next;

            }else {
                prev = temp;
                temp = temp->next;
            }
            
        }

        current=current->next;
    }
    
    return head;

}