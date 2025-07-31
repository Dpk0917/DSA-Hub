class Solution {
    public:
        int largestElement(vector<int>& nums) {
            int n=nums.size();
            int ans=INT_MIN;
            for(int i=0;i<n;i++){
                if(ans<=nums[i]){
                    ans=nums[i];
                }
            }
            return ans;
        }
    };