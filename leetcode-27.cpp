class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int count=0;
            vector<int>ans;
    
            for(int i=0;i<nums.size();i++){
                if(nums[i]==val){
                    nums.erase((nums.begin(),nums.end(),val),nums.end());
                    count=nums.size();
                    
                }
    
    
            }
    
           return count;        
        }
    };