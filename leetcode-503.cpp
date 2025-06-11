class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       int n=nums.size();
       
       vector<int>ans;

       for(int i=0;i<n;i++){
        int curr=nums[i];
        int nextgreater=-1;
        for(int k=1;k<n;k++){
            int nextIndex = (i + k) % n;
                if(nums[nextIndex]>curr) {
                    nextgreater = nums[nextIndex];
                    break;
                }
        }
        ans.push_back(nextgreater); 
       }
       return ans;
    }

};