class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {
        
        // vector<long long>ans;

        // for(int i=0;i<nums1.size();i++){
        //     priority_queue<int,vector<int>,greater<int>>pq;
        //     for(int  j=0;j<nums1.size();j++){
        //         if(nums1[j]<nums1[i]){
        //             pq.push(nums2[j]);
        //             if(pq.size()>k){
        //                 pq.pop();
        //             }
        //         }
        //     }

        //     priority_queue<int, vector<int>, greater<int>>tempo=pq;

        //     long long sum=0;
        //     while(!tempo.empty()){
        //         sum+=tempo.top();
        //         tempo.pop();   
        //     }
        //     ans.push_back(sum);
        // }

        // return ans;

        

        int n=nums1.size();
        vector<tuple<int,int,int>>nums;

        for(int i=0;i<nums1.size();i++){
            nums.push_back({nums1[i],i,nums2[i]});
        }

        sort(nums.begin(),nums.end());
        priority_queue<int,vector<int>,greater<int>>pq;

        vector<long long>result(n,0);

        long long sum = 0;

        for(int i = 0; i < n; i++){

            int val = get<0>(nums[i]);
            int idx = get<1>(nums[i]);
            int num2 = get<2>(nums[i]);

            // handle duplicates
            if(i > 0 && get<0>(nums[i]) == get<0>(nums[i-1])){
                result[idx] = result[get<1>(nums[i-1])];
            } else {
                result[idx] = sum;
            }

            // push current nums2
            pq.push(num2);
            sum += num2;

            if(pq.size() > k){
                sum -= pq.top();
                pq.pop();
            }
        }
        
        return result;
    }
};