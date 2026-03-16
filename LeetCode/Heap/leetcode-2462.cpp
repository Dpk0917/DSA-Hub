class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {

        long long ans = 0;

        priority_queue<int,vector<int>,greater<int>> minheap1;
        priority_queue<int,vector<int>,greater<int>> minheap2;

        int left = 0;
        int right = costs.size() - 1;

        // fill left candidates
        for(int i = 0; i < candidates && left <= right; i++){
            minheap1.push(costs[left++]);
        }

        // fill right candidates
        for(int i = 0; i < candidates && left <= right; i++){
            minheap2.push(costs[right--]);
        }

        while(k--){

            int top1 = minheap1.empty() ? INT_MAX : minheap1.top();
            int top2 = minheap2.empty() ? INT_MAX : minheap2.top();

            if(top1 <= top2){

                ans += top1;
                minheap1.pop();

                if(left <= right){
                    minheap1.push(costs[left++]);
                }

            }else{

                ans += top2;
                minheap2.pop();

                if(left <= right){
                    minheap2.push(costs[right--]);
                }
            }
        }

        return ans;
    }
};