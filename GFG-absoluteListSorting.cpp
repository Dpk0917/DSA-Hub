/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
class Solution {

  public:
    Node* sortList(Node* head) {
        // Your Code Here
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        Node*curr=head;
        vector<int>ans;
        
        while(curr!=NULL){
            ans.push_back(curr->data);
            curr=curr->next;
        }
        
        sort(ans.begin(),ans.end());
        
        curr=head;
        int i=0;
        while(curr!=NULL){
            curr->data=ans[i];
            i++;
            curr=curr->next;
            
        }
        
        return head;
    }
};