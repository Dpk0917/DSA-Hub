class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>freqency;
        for(int x:nums){
            freqency[x]++;
        }

        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;

        // for(auto &p:freqency){
        //     minheap.push({p.second,p.first});

        //     if(minheap.size()>k){
        //         minheap.pop();
        //     }
        // }

        // vector<int>ans;
        // while(!minheap.empty()){
        //     ans.push_back(minheap.top().second);
        //     minheap.pop();
        // }

        // return ans;


        priority_queue<pair<int,int>,vector<pair<int,int>>>maxheap;

        for(auto &p:freqency){
            maxheap.push({p.second,p.first});

        }

        vector<int>ans;

        int i=0;
        while(i<k){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
            i++;
        }

        return ans;

    }
};