class Solution {
public:
    
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minheap;
        vector<pair<int,int>>tempo;

        for(int i=0;i<nums.size();i++){
            tempo.push_back({nums[i],i});
        }

        long long ans=0;

        vector<bool>check(nums.size(),false);

        for(int i=0;i<nums.size();i++){
            minheap.push(tempo[i]);
        }

        while(!minheap.empty()){
            int element=minheap.top().first;
            int index=minheap.top().second;
            minheap.pop();

            if(!check[index]){
                check[index]=true;
                ans+=element;

            if(index-1>=0 && !check[index-1]){
                check[index-1]=true;
            }

            if(index+1<nums.size() && !check[index+1]){
                check[index+1]=true;  
            }
        }

        }

        return ans;
    }
};