class MinStack {
public:
    int *arr;
    int peek;
    int size;

    MinStack() {
    this->size = 1000;  // or some default value
    peek = -1;
    arr = new int[size];
    }

    MinStack(int s) {
        this->size=s;
        peek=-1;
        arr=new int[s];
    }
    
    void push(int val) {
        if(size-peek>1){
            peek++;
            arr[peek]=val;
        }
    }
    
    void pop() {
        if(peek>=0){
            peek--;
        }
    }
    
    int top() {
        if(peek>=0){
            return arr[peek];
        }else{
            return -1;
        }
    }
    
    int getMin() {
        aif(peek>=0){
            int ans=INT_MAX;
            for(int i=0;i<=peek;i++){
                if(ans>arr[i]){
                    ans=arr[i];
                }
            }
            return ans;
            
        }
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */