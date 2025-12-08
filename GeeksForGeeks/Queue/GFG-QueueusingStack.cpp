class myQueue {
private:
    stack<int>s;
    

  public:
    myQueue() {
        // Initialize your data members
        stack<int>s;
        
    }

    void enqueue(int x) {
        // Implement enqueue operation
        
        s.push(x);
    }

    void dequeue() {
        // Implement dequeue operation
        if(s.empty()){
            return;
        }
        int tope=s.top();
        s.pop();
        
        if(s.empty()){
            return;
            
        }
        
        dequeue();
        
        s.push(tope);
        
        return;
    }

    int front() {
        // Implement front operation
        if(s.empty()){
            return -1;
        }
        
        int x = s.top();
        s.pop();

        if (s.empty()) {
            s.push(x);  
            return x;
        }

        int item = front();  
        s.push(x);
        return item;
        
        
    }

    int size() {
        // Implement size operation
        return s.size();
    }
};
