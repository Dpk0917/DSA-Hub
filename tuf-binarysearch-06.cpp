class Solution {
public:
    int search(vector<int> &nums, int k) {
       int ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){
                ans=i;
            }
        }
        return ans;
    }
};