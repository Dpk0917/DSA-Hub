class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        
        unordered_map<int,int>map;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]-i;
        }

        map[nums[0]]=1;

        for(int j=1;j<nums.size();j++){
            int countOfNumsj=map[nums[j]];

            int totalnumberj=j;

            int badpair=totalnumberj-countOfNumsj;

            ans+=badpair;

            map[nums[j]]++;
        }

        return ans;

    }
};