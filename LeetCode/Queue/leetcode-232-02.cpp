class MyQueue {
public:
    // int *arr;
    // int curr;
    // int size;
    // int top;


    int *arr;
    int size;
    int qfront;
    int rear;


    MyQueue() {
        // size = 100;
        // arr = new int[size];
        // curr = -1;
        // top = 0;

        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }

    MyQueue(int s) {
        // size = s;
        // arr = new int[size];
        // curr = -1;
        // top = 0;

        size=s;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    
    void push(int x) {
        // if(curr<size-1){
        //     curr++;
        //     arr[curr]=x;
        // }

        if(rear==size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[rear]=x;
            rear++;
        }
    }
    
    int pop() {
        // if(top<=curr){
        //     return arr[top++];
        // }else{
        //     return -1;
        // }

        if(qfront==rear){
            return -1;
        }else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }
    
    int peek() {
        // if(top<=curr){
        //     return arr[top];
        // }else{
        //     return -1;
        // }
    if(qfront==rear){
        return -1;

    }else{
           return arr[qfront];
        }
    }
    
    bool empty() {
        // return top>curr;
         if(qfront==rear){
            return true;
        }else{
            return false;
        }
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