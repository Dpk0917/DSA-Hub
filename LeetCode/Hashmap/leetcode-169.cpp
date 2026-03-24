class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int ans=nums.size()/2;
        // return nums[ans];

        unordered_map<int,int>count;

        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;

        }

        int maxi=INT_MIN;

        for(auto i:count){
            if(i.second>maxi){
                maxi=i.second;
            }
        }

        int ans=0;

        for(int i=0;i<nums.size();i++){
            if(maxi==count[nums[i]]){
                ans=nums[i];
            }
        }

        return ans;
    }
};