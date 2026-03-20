class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        
        // const int MOD=1e9+7;
        // vector<long long>ans;

        // for(int i=0;i<nums.size();i++){
        //     long long sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         ans.push_back(sum);
        //     }
        // }

        // sort(ans.begin(),ans.end());

        // long long su=0;
        // for(int i=left-1;i<right;i++){
        //     su=(su+ans[i])%MOD;
        // }


        // return su;


        int sum=0;

        const int MOD=1e9+7;

        vector<long long> element;

        for(int i=0;i<nums.size();i++){
            long long sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                element.push_back(sum);
            }
        }
        sort(element.begin(),element.end());

        priority_queue<long long,vector<long long>,greater<long long>>minheap;

        for(int i=left-1;i<right && i<element.size();i++){
            minheap.push(element[i]);
        }

        long long ans=0;
        while(!minheap.empty()){
            ans=(ans+minheap.top())%MOD;
            minheap.pop();
        }
        return ans;
    
    }
};