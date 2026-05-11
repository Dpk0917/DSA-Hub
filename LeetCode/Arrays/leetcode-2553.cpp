class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            int digit=nums[i];
            vector<int> temp;
            while(digit>0){
                int demo=digit%10;

                temp.push_back(demo);
                digit=digit/10;

            }

            for(int j=temp.size()-1;j>=0;j--) {
                ans.push_back(temp[j]);
            }
        }

        return ans;
    }
};