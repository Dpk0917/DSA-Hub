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
    ListNode* arrayToLinkedList(vector<int>& arr) {

    ListNode*dummy=new ListNode(-1);
    ListNode*tail=dummy;

    for(int x:arr) {
        tail->next=new ListNode(x);
        tail=tail->next;
    }
    return dummy->next;
}

public:
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL){
            return head;
        }

        vector<int>ans;
        ListNode*curr=head;
        int sum=0;
        curr=curr->next;
        
        while(curr!=NULL){
            if(curr->val==0){
                ans.push_back(sum);
                sum=0;
            }else{
                sum=sum+curr->val;
            }
            curr=curr->next;
            
        }

        ListNode*temp=arrayToLinkedList(ans);

        return temp;
        
    }
};