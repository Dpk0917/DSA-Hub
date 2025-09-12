class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        unordered_map<int,int>result;

        for(int i=0;i<nums1.size();i++){
            int num=nums1[i];
            result[num]++;
        }

        for(int i=0;i<nums2.size();i++){
            int num=nums2[i];
            if(result[num]>0){
                ans.push_back(num);
                result[num]--;
            }
        }


        return ans;
    }
};