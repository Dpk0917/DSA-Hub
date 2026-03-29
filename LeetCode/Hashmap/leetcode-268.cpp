class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //     int ans=nums.size();
    //     for(int i=0;i<nums.size();i++){
    //         ans+=i-nums[i];
    //     }
    //  return ans;


    unordered_map<int,int>map;

    for(int i=0;i<nums.size();i++){
        map[nums[i]]++;
    }

    int ans=0;
    for(int i=0;i<=nums.size();i++){
        if(map.find(i)==map.end()){
            ans=i;
        }
    }

    return ans;   

    }

};