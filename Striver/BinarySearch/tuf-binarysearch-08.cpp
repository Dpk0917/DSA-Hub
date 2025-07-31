class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n=nums.size();
        if(n==1 || nums[0]<nums[n-1]){
            return 0;
        }

        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                return i;
            }
        }

        return 0;
    }
};