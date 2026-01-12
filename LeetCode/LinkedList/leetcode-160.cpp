/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*curr=headA;
        ListNode*curr2=headB;

        if(headA==NULL || headB==NULL){
            return NULL;
        }
        while(curr!=curr2){
            if(curr==NULL){
                curr=headB;
            }else{
                curr=curr->next;
            }

            if(curr2==NULL){
                curr2=headA;
            }else{
                curr2=curr2->next;
            }
        }

        return curr;
    }
};