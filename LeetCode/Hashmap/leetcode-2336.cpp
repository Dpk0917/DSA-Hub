class SmallestInfiniteSet {
public:
    priority_queue<int,vector<int>,greater<int>>minheap;
    int current;
    unordered_set<int>s;

    SmallestInfiniteSet() {
        current=1;
    }
    
    int popSmallest() {
        if(!minheap.empty()){
            int top=minheap.top();
            minheap.pop();
            s.erase(top);
            return top;
        }
        return current++;
    }
    
    void addBack(int num) {
        if(num<current && s.find(num)==s.end()){
            minheap.push(num);
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */