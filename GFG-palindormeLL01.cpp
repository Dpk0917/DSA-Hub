/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

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
        // Function to check whether the list is palindrome.
        bool isPalindrome(Node *head) {
            
            vector<int>arr;
            
            Node*temp=head;
            while(temp!=NULL){
                arr.push_back(temp->data);
                temp=temp->next;
            }
            
            return checkPalindrome(arr);
        }
    };