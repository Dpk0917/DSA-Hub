class Solution {
    public:
        int secondLargestElement(vector<int>& nums) {
            //your code goes here
    
            int n=nums.size();
            int largest=0;
            int ans=-1;
    
            for(int i=0;i<n;i++){
                if(largest<=nums[i]){
                    largest=nums[i];
                }
            }
    
            for(int i=0;i<n;i++){
                if(ans<nums[i] && nums[i]<largest){
                    ans=nums[i];
                }
            }
    
            if(ans==INT_MIN){
                return ans;
            }
    
            return ans;
     
        }
    };