void insertAttail(Node*tail,Node*curr){
    tail->next=curr;
    tail=curr;

}


Node*zerohead=new Node(-1);
Node*zerotail=zerohead;
Node*onehead=new Node(-1);
Node*onetail=onehead;
Node*twohead=new Node(-1);
Node*twotail=twohead;

Node*curr=head;

//created separate list for 0s,1s,2s.
while(curr!=NULL){
    int value=curr->data;

    if(value==0){
        insertAttail(zerotail,curr);
    }else if(value==1){
        insertAttail(onetail,curr);
    }else if(value==2){
        innsertAttail(twotail,curr);
    }
    curr=curr->next;
}

//merge 3 sublist

//1st list not empty
if(onehead->next!=NULL){
    zerotail->next=onehead->next;  
}else{
    //1st list->empty
    zerotail->next=twohead->next;
}
onetail->next=twohead->next;
twotail->next=NULL;

//setup head
head=zerohead->next;

//delete dummy nodes
delete zerohead;
delete onehead;
delete twohead;

return head;