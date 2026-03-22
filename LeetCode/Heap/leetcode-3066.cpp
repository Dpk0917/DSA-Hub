class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        priority_queue<long long,vector<long long>,greater<long long>>mh;

        for(int i=0;i<nums.size();i++){
            mh.push(nums[i]);
        }

        int ans=0;

        while(mh.size()>1 && mh.top()<k){

            long long x=mh.top();
            mh.pop();

            long long y=mh.top();
            mh.pop();

            mh.push((x*2)+y);
            ans++;
        }

        return mh.top()>=k?ans:-1;
        
    }
};