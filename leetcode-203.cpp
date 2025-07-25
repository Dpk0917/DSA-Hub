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
        ListNode* removeElements(ListNode* head, int val) {
    // It removes all nodes from the front as long as they match val. After that, the list becomes       nullptr, which is the correct result.
        while (head != nullptr && head->val == val) {
            head = head->next;
        }
    
        ListNode*current=head;
    
    
        while(current!=NULL && current->next!=NULL){
            if(current->next->val==val){
                    current->next=current->next->next;
            }else{
                current=current->next;
                }
            }
            return head;
        }
    };