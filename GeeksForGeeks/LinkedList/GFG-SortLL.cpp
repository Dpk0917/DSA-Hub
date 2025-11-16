/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* mergeSort(Node* head) {
        // code here
        if(head==NULL && head->next==NULL){
            return head;
        }
        
        Node*curr=head;
        vector<int>ans;
        
        while(curr!=NULL){
            ans.push_back(curr->data);
            curr=curr->next;
        }
        
        sort(ans.begin(),ans.end());
        
        int i=0;
        curr=head;
        
        while(curr!=NULL){
            curr->data=ans[i];
            i++;
            curr=curr->next;
        }
        
        return head;
        
    }
};