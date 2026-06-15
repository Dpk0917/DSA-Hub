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
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL || head->next==NULL){
            return NULL;
        }

        // ListNode*fast=head;
        // ListNode*slow=head;
        // ListNode*prev=NULL;

        // while(fast!=NULL && fast->next!=NULL){
        //     prev=slow;
        //     fast=fast->next->next;
        //     slow=slow->next;
        // }

        // prev->next=slow->next;

        // return head;

      ListNode*tempo=head;
      int size=0;
      while(tempo!=NULL){
        size++;
        tempo=tempo->next;
      }
      ListNode*prev=head;
      for(int i=0;i<size/2-1;i++){
        prev=prev->next;
      }

      prev->next=prev->next->next;
      
      return head;
    }
};