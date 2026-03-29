class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     ans=ans^nums[i];
        // }
        // return ans;

        unordered_map<int,int>map;

        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }

        int ans=0;
        for(auto& it:map){
            if(it.second==1){
                ans=it.first;
            }
        }

        return ans;
    }
};