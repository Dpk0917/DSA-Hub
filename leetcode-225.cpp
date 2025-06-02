class MyStack {
public:
    int *arr;
    int peek;
    int size;

    MyStack() {
    this->size = 1000;  // or some default value
    peek = -1;
    arr = new int[size];
    }

    MyStack(int s) {
        this->size=s;
        arr=new int[size];
        peek=-1;
    }
    
    void push(int x) {
        if(size-peek>=0){
            peek++;
            arr[peek]=x;
        }
    }
    
    int pop() {
    if (peek >= 0) {
        int topElement = arr[peek];
        peek--;
        return topElement;
    } else {
        return -1;
        }
    }

    
    int top() {
        return arr[peek];
    }
    
    bool empty() {
        if(peek==-1){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */