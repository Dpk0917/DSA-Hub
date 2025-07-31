class Solution {
  public:
    queue<int> rearrangeQueue(queue<int> q) {
        // code here
        int mid=q.size()/2;
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
        
        return q;
    }
    
};