class SpecialStack {
    stack<int> s;
    int mini;

public:
    void push(int data) {
        if (s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if (data < mini) {
                int encoded = 2 * data - mini;
                s.push(encoded);
                mini = data;  // ? fix here
            } else {
                s.push(data);
            }
        }
    }

    void pop() {
        if (s.empty()) return;

        int curr = s.top();
        s.pop();

        if (curr < mini) {
            mini = 2 * mini - curr;  // recover previous min
        }
    }

    int top() {
        if (s.empty()) return -1;

        int curr = s.top();
        return (curr < mini) ? mini : curr;
    }

    int getMin() {
        return (s.empty()) ? -1 : mini;
    }
};
