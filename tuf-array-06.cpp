#include <algorithm>

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int count=0;

        for(int i=0;i<n;i++){
            if(nums[i]==1){
                maxi++;
                count=max(count,maxi);
            }else(nums[i]!=1){
               maxi=0;
            }
        }
        return count;
    }
};