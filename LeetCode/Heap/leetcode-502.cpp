class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        
        vector<pair<int,int>>nums;
        for(int i=0;i<profits.size();i++){
            nums.push_back({capital[i],profits[i]});
        }

        sort(nums.begin(),nums.end());

        int i=0;

        priority_queue<int>pq;

        while(k--){
            while(i<profits.size() && nums[i].first<=w){
                pq.push(nums[i].second);
                i++;
            }

            if(pq.empty()) break;

            w+=pq.top();
            pq.pop();

        }

        return w;
    }
};