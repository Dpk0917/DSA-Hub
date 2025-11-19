/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL || head->next==NULL){
            return head;
        }

        Node*curr=head;
        vector<int>nums;

        while(curr!=NULL){
            nums.push_back(curr->data);
            curr=curr->next;
        }

        vector<int>temp(nums.size());
       for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i]; 
       }
       nums.clear();
       nums=temp;

       int i=0;
       curr=head;
       while(curr!=NULL){
        curr->data=nums[i];
        i++;
        curr=curr->next;
       }


       return head;
}