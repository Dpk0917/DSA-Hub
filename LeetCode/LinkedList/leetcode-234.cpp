class Solution {
    private:
    bool checkPalindrome(vector<int>arr){
        int n=arr.size();
        int s=0;
        int e=n-1;

        while(s<=e){
            if(arr[s]!=arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }

public:
    bool isPalindrome(ListNode* head) {
        vector<int>arr;

        ListNode*temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp=temp->next;

        }
        return checkPalindrome(arr);
    }
};