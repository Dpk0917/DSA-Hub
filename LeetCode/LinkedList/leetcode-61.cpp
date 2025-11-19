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
    ListNode* rotateRight(ListNode* head, int k) {
    //     if(head==NULL || head->next==NULL){
    //         return head;
    //     }

    //     ListNode*curr=head;
    //     vector<int>nums;

    //     while(curr!=NULL){
    //         nums.push_back(curr->val);
    //         curr=curr->next;
    //     }

    //     vector<int>temp(nums.size());
    //    for(int i=0;i<nums.size();i++){
    //     temp[(i+k)%nums.size()]=nums[i]; 
    //    }
    //    nums.clear();
    //    nums=temp;

    //    int i=0;
    //    curr=head;
    //    while(curr!=NULL){
    //     curr->val=nums[i];
    //     i++;
    //     curr=curr->next;
    //    }


    //    return head;

    if(head==NULL || head->next==NULL){
        return head;
    }

    for(int i=0;i<k;i++){
        ListNode*curr=head;
        while(curr->next!=NULL){
            curr=curr->next;
        }

        ListNode*seclast=head;
        while(seclast->next->next!=NULL){
            seclast=seclast->next;
        }

        curr->next=head;
        seclast->next=NULL;
        head=curr;
        
        }

        return head;
    }
};