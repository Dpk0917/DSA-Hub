#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node*node=new Node;

    //constructor
    Node(int d){
        this->data=d;
        gthis->next=NULL:
    }

    //destructor
    ~Node(int d){
        int value=this->data;
        if(this->next != NULL){
           delete next;
           next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertnode()
int main(){


    return 0;
}