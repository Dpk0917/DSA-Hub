class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code he re
        stack<int>s;
        
        int n=q.size();
        if (k <= 0 || k > n) return q;
        
        for(int i=0;i<k;i++){
            int element=q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()){
            int element=s.top();
            s.pop();
            q.push(element);
        }
        
        // fetch first n-k element form q and push back (uske hee  element usme daal denge)
        for (int i = 0; i < n - k; ++i) {
            int element=q.front();
            q.pop();
            q.push(element);
    }
        
        return q;
    }
};