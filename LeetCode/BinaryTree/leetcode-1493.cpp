class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0,maxi=0,zero=0;

        for(int i=0;i<nums.size();i++){

            if(nums[i]==0){
                zero++;

            }

            while(zero>1){
                if(nums[left]==0){
                    zero--;
                }

                left++;
            }

            maxi=max(maxi,i-left+1);
        }

        return maxi-1;


    }
};