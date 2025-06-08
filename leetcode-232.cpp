class MyQueue {
public:
    int *arr;
    int curr;
    int size;
    int top;

    MyQueue() {
        size = 100;
        arr = new int[size];
        curr = -1;
        top = 0;
    }

    MyQueue(int s) {
        size = s;
        arr = new int[size];
        curr = -1;
        top = 0;
    }
    
    void push(int x) {
        if(curr<size-1){
            curr++;
            arr[curr]=x;
        }
    }
    
    int pop() {
        if(top<=curr){
            return arr[top++];
        }else{
            return -1;
        }
    }
    
    int peek() {
        if(top<=curr){
            return arr[top];
        }else{
            return -1;
        }
    }
    
    bool empty() {
        return top>curr;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */