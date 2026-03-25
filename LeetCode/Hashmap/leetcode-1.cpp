
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }

        //     }
            
        // }
        // return nums;

        unordered_map<int,int>map;

        for(int i=0;i<nums.size();i++){
            int compli=target-nums[i];

            if(map.find(compli)!=map.end()){
                return {map[compli],i};
            }

            map[nums[i]]=i;
        }

        return {};

    }
};

                            //TUF
                            
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>ans;
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                 }
//             }
//         }
//         return ans;
  
//     }
// };