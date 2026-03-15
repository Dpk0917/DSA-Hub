class KthLargest {
priority_queue<int, vector<int>, greater<int>> mh;
int K;

public:
    KthLargest(int k, vector<int>& nums){

        K=k;

        for(int i=0;i<nums.size();i++){
            mh.push(nums[i]);

            if(mh.size()>k){
                mh.pop();
            }
        }
    }
    
    int add(int val) {
        
        mh.push(val);
        if(mh.size()>K){
            mh.pop();
        }

        return mh.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */