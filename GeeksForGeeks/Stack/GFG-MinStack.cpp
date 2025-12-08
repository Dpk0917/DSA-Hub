class SpecialStack {
private:
    int *nums;
    int size;
    int top;
    
public:
    SpecialStack() {
        size = 1000001;
        top = -1;
        nums = new int[size];
    }

    void push(int x) {
        if (top < size - 1) {
            top++;
            nums[top] = x;
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        }
    }

    int peek() {
        if (top >= 0) {
            return nums[top];
        }
        return -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    int getMin() {
        if (top >= 0) {
            int ans = INT_MAX;
            for (int i = 0; i <= top; i++) {
                ans = min(ans, nums[i]);
            }
            return ans;
        }
        return -1;
    }
};
