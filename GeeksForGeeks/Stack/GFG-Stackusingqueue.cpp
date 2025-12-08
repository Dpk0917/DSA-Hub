class myStack {
    queue<int> q;
    int peek=-1;
    
    
  public:

    void push(int x) {
        // Inserts an element x at the top of the stack
        
        q.push(x);
        
        int szzz=q.size();
        
        for(int i=0;i<szzz-1;i++){
            q.push(q.front());
            q.pop();
        }
        
    }

    void pop() {
        // Removes an element from the top of the stack
        if(!q.empty()){
            q.pop();
        }
    }

    int top() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        int topper=-1;
        
        if(!q.empty()){
            topper=q.front();
        }
        
        return topper;
    }

    int size() {
        // Returns the current size of the stack
        return q.size();
    }
};
