/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
    
            if(head==NULL){
                return NULL;
            }
    
            ListNode*prev=head;
            ListNode*current=head->next;
    
            while(prev!=NULL && current!=NULL){
                if(prev->val==current->val){
                    ListNode*temp=current;
                    prev->next=current->next;
                    current=current->next;
                    delete temp;            
                }else{
                    prev=prev->next;
                    current=current->next; 
                }
            }
            return head;
        }
    };