//RUN TIME ERROR

class Solution {
    public:
        vector<int> leaders(vector<int>& nums) {
          int n=nums.size();
          //for empty nums
          if (n == 0) return {};
          vector<int>ans;
    
          ans.push_back(nums[n-1]);
          int leader=nums[n-1];
    
          for(int i=n-2;i>=0;i--){
            if(leader<nums[i]){
                ans.push_back(nums[i]);
                leader=nums[i];
            }
          }
          reverse(ans.begin(), ans.end());
          return ans;
        }
    };