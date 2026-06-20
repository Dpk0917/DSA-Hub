class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        
        unordered_map<int,int>map1;
        unordered_map<int,int>map2;

        for(int &num:nums){
            map2[num]++;
        }

        int n=nums.size();

        for(int i=0;i<n;i++){
            int num=nums[i];

            map1[num]++;
            map2[num]--;

            int n1=i+1;
            int n2=n-i-1;

            if(map1[num]*2>n1 && map2[num]*2>n2){
                return i;
            }
        }

        return -1;

    }
};