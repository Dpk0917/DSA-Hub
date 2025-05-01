class Solution {
    private: Peakvalue(vector<int>& nums,int ans,int n,int maxi){
        if(n==0){
            return 0;
        }
        if(nums[0]>=marks)
            
    
    }
    public:
        int findPeakElement(vector<int>& nums) {
            int maxi=INT_MIN;
            int ans=0;
            int n=nums.size();
            int s=0;
            int e=n-1;
    
            for(int i=0;i<n;i++){
                if(maxi<nums[i]){
                    maxi=nums[i];
                    ans=i;
    
                }
            }
            return ans;
            
        }
        
    };