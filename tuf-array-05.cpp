class Solution {
    public:
        void rotateArrayByOne(vector<int>& nums) {
            int n=nums.size();
            for(int i=0;i<n-1;i++){ 
                swap(nums[i],nums[i+1]);
            }
        }
    };