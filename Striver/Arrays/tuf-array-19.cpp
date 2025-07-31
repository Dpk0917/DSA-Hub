class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>posi;
        vector<int>nigga;

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                posi.push_back(nums[i]);
            }else{
                nigga.push_back(nums[i]);
            }
        }

        nums.clear();
        int i=0;
        while(i<n/2){
            nums.push_back(posi[i]);
            nums.push_back(nigga[i]);
            i++;
        }
        return nums;
    }
};