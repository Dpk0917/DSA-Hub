class MyCircularDeque {
    int *arr;
    int size;
    int front;
    int rear;

public:
    MyCircularDeque(int k) {
        size=k+1;
        arr = new int[size];
        front=0;
        rear=0;

    }
    
    bool insertFront(int value) {
        if ((rear + 1) % size == front){
            return false;
        }
        front=(front-1+size)%size;
        arr[front]=value;
        return true;
    }
    
    bool insertLast(int value) {
        if((rear+1)%size==front){
            return false;
        }
        arr[rear]=value;
        rear=(rear+1)%size;
        return true;
    }
    
    bool deleteFront() {
        if(front==rear){
            return false;
        }
        front=(front+1)%size;
        return true;
    }
    
    bool deleteLast() {
        if(front==rear){
            return false;
        }
        rear=(rear-1+size)%size;
        return true;
    }
    
    int getFront() {
        if(front==rear){
            return -1;
        }
        return arr[front];
    }
    
    int getRear() {
        if(front==rear){
            return -1;
        }
        // return arr[rear]; This will return the next index
        return arr[(rear - 1 + size) % size];
    }
    
    bool isEmpty() {
        if(rear==front){
            return true;
        }else{
            return false;
        }
    }
    
    bool isFull() {
        if((rear+1)%size==front){
            return true;
        }else{
            return false;
        }
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */