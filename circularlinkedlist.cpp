#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next; // Removed unnecessary instantiation

    //constructor
    Node(int d) {
        this->data = d;
        this->next = NULL;
    }

    //destructor
    ~Node() { // Destructor cannot have parameters
        int value = this->data;
        if (this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertnode(Node* &tail, int element, int d) {
    //assuming the element is present in the list

    if (tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    } else {
        //non empty list
        //assuming the element are present in the list

        Node* curr = tail; //declares a pointer variable curr of type Node* and initializes it with the value of tail

        while (curr->data != element) {
            curr = curr->next;
        }
        //element is found curr-> represneting element wlaa node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* tail) {
    Node* temp = tail;

    //isse single node hogi toh print nahi hoga
    // while(tail->next!=temp){
    //     cout<<tail->data<<" ";
    //     tail=tail->next;

    // }
    // cout<<" ";

    if(tail==NULL){
        cout<<"list is empty";
        return;
    }

    //tabhi do while loop use krennge 
    do {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp); // Fixed missing semicolon
    cout << endl;
}

void deleteNode(Node* &tail,int value){

    //empty list
    if(tail==NULL){
        cout<<"your list is empty please check again"<<endl;
        return;
    }else{
        //non empty
        //assuming that "value" is present in the linked list
        Node* prev=tail;
        Node*curr=prev->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //1 ndoe linked list
        if(curr==prev){
            tail=NULL;
        }
        //2 node linked list
        else if(tail==curr){
            tail=prev;
        }
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

bool isCircularList(Node*head){
    
    if(head==NULL){
        return false;
    }

    Node*temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;

    }
    if(temp==head){
        return true;
    }
    false;
}
int main() {
    Node* tail = NULL;

    //empty list mei insert krte hai
    insertnode(tail, 5, 9); // Fixed: First insertion should insert the same element
    print(tail);

    insertnode(tail, 9, 5);
    print(tail);

    insertnode(tail, 5,12);
    print(tail);

    insertnode(tail, 5,10);
    print(tail);
    
    insertnode(tail, 9, 22);
    print(tail);

    // deleteNode(tail,9);
    // print(tail);

    if(isCircularList){
        cout<<"linked list is circular"<<endl;
    }else{
        cout<<"linked list is not circular"<<endl;
    }

    return 0;
}
