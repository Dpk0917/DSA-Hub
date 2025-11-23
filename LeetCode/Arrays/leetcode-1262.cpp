// class Solution {
// public:
//     int maxSumDivThree(vector<int>& nums) {
//         int sum=0;
//         int ans=0;
//         int maxsum=0;

//         for(int i=0;i<nums.size();i++){
//             sum+=nums[i];
//         }

//         sort(nums.begin(),nums.end());

//         for(int i=0;i<nums.size();i++){
//             if((sum-nums[i])%3==0){
//                 ans=sum-nums[i];
//                 maxsum=max(ans,maxsum);
//             }
//         }

//         return maxsum;        
//     }
// };


class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
        }
        sort(nums.begin(), nums.end());
        int maxsum = 0;
        for(int i = 0; i < nums.size(); i++){
            int temp = sum - nums[i];
            if(temp % 3 == 0){
                maxsum = max(maxsum, temp);
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                int temp = sum - nums[i] - nums[j];
                if(temp % 3 == 0){
                    maxsum = max(maxsum, temp);
                    break;
                }
            }
        }
        if(sum % 3 == 0) return sum;
        return maxsum;
    }
};
