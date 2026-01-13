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
private:
    ListNode*Reverse(ListNode*head){
        ListNode*curr=head;
        ListNode*next=NULL;
        ListNode*prev=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }

        return prev; 
    }


public:
    int pairSum(ListNode* head) {

        if(head==NULL){
            return 0;
        }

        ListNode*curr=head;
        int size=0;

        while(curr!=NULL){
            size++;
            curr=curr->next;

        }

        ListNode*center=head;

        for(int i=0;i<size/2;i++){
            center=center->next;
        }

        center=Reverse(center);

        ListNode*first=head;
        int maxi=0;

        while(center!=NULL){
            int sum=first->val+center->val;
            maxi=max(sum,maxi);
            first=first->next;
            center=center->next;
        }

        return maxi;
    }
};