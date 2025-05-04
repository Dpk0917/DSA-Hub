class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int n=nums.size();
            if(n==0){
                return 0;
            }
            vector<int>temp;
            for(int i=0;i<n-1;i++){
                if(nums[i]!=nums[i+1]){
                    temp.push_back(nums[i]);
                }
            }
            temp.push_back(nums[n-1]);
            nums.clear();
            nums=temp;
    
            return nums.size();
        }
    };