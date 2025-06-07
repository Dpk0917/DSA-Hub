class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int largest=0;
        int lastlargest=INT_MIN;
        int countcurr=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]-1==lastlargest){
                countcurr++;
                lastlargest=nums[i];

            }else if(nums[i]!=lastlargest){
                countcurr=1;
                lastlargest=nums[i];
            }
            largest=max(largest,countcurr);

        }
        return largest;
    }
};