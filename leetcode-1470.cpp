class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int mid=n;
        queue<int>q;

        for(int i=0;i<2*n;i++){
            q.push(nums[i]);
        }

        stack<int>s;
        
        for(int i=0;i<mid;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        
        while(!s.empty()){
            int val=s.top();
            s.pop();
            q.push(val);
        }
        
        for(int i=0;i<mid;i++){
            int val=q.front();
            q.pop();
            q.push(val);
        }
        
        for(int i=0;i<mid;i++){
            int val=q.front();
            q.pop();
            s.push(val);
        }
        
        while(!s.empty()){
            int val=s.top();
            s.pop();
            q.push(val);

            int val2=q.front();
            q.pop();
            q.push(val2);
        }

        nums.clear();

        while(!q.empty()){
            int val=q.front();
            q.pop();
            nums.push_back(val);
        }

        return nums;
    }
};