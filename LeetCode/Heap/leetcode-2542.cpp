class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<pair<int,int>> nums;

        for(int i = 0; i < nums1.size(); i++){
            nums.push_back({nums2[i], nums1[i]});
        }

        sort(nums.rbegin(), nums.rend()); 

        long long ksum=0;
        priority_queue<int,vector<int>, greater<int>> pq;

        for(int i=0;i<k;i++){
            ksum+=nums[i].second;
            pq.push(nums[i].second);
        }

        long long result=ksum*nums[k-1].first;

        for(int i=k;i<nums.size();i++){
            ksum+=nums[i].second-pq.top();
            pq.pop();
            pq.push(nums[i].second);

            result=max(result,ksum*nums[i].first);
        }

        return result;
    }
};