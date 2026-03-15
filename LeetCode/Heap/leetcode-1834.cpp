class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n=tasks.size();

        vector<array<int,3>>sorted;
        for(int i=0;i<n;i++){
            int at=tasks[i][0];
            int bt=tasks[i][1];

            sorted.push_back({at,bt,i});
        }

        sort(sorted.begin(),sorted.end());

        vector<int>result;

       priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
       long long currtime=0;
       int index=0;

       while(index<n || !pq.empty()){

            if(pq.empty() && index<n && currtime<sorted[index][0]){
                currtime=sorted[index][0];

            }

            while(index<n && sorted[index][0]<=currtime){
                pq.push({sorted[index][1],sorted[index][2]});
                index++;
            }

            if(!pq.empty()){
                auto curr=pq.top();
                pq.pop();

                currtime+=curr.first;
                result.push_back(curr.second);
            }
       }

       return result;
    }
};