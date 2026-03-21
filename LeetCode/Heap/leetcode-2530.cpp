class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        
        priority_queue<int>maxhp;

        for(int i=0;i<nums.size();i++){
            maxhp.push(nums[i]);

        }

        long long ans=0;
        while(k!=0){
            int tope=maxhp.top();
            maxhp.pop();

            ans+=(long long)tope;
            int val=ceil((double)tope/3);

            maxhp.push(val);
            k--;
        }

        return ans;
    }
};