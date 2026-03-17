class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        unordered_map<char,int>freq;

        for(char ch:tasks){
            freq[ch]++;
        }

        priority_queue<int>pq;


        for(auto it : freq){
            pq.push(it.second);
        }

        int ans=0;

        while(!pq.empty()){
            vector<int>temp;

            int cycle=n+1;

            while(cycle-- && !pq.empty()){
                int f=pq.top();
                pq.pop();

                f--;
                if(f>0){
                    temp.push_back(f);
                }

                ans++;
            }

            for(int x:temp){
                pq.push(x);
            }

            // if pq is empty → no idle needed
            if(pq.empty())break;

            // else we had idle time
            ans+=cycle+1; // remaining slots
        }

        return ans;

    }
};