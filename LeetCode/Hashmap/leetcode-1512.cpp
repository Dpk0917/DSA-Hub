class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    //    unordered_map<int,int>mp;
    //    int result=0;
    //    for(int &num : nums){
    //         result+=mp[num];
    //         mp[num]++;
    //    } 

    //    return result;


    int ans=0;
    unordered_map<int,int>mp;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }

    for(auto &it:mp){
        int count=it.second;
        ans+=(count*(count-1))/2;
    }

    return ans;

    }
};