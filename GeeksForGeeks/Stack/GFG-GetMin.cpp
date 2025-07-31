class Solution {
    stack<int> s;
    int mini;

public:
    Solution() {
        // Nothing required here since variables are declared outside
    }

    // Add an element to the top of Stack
    void push(int x) {
        if (s.empty()) {
            s.push(x);
            mini = x;
        } else {
            if (x < mini) {
                int encoded = 2 * x - mini;
                s.push(encoded);
                mini = x;  // Correct assignment
            } else {
                s.push(x);
            }
        }
    }

    // Remove the top element from the Stack
    void pop() {
        if (s.empty()) return;

        int curr = s.top();
        s.pop();

        if (curr < mini) {
            // Decoding previous minimum value
            mini = 2 * mini - curr;
        }
    }

    // Returns top element of the Stack
    int peek() {
        if (s.empty()) return -1;

        int curr = s.top();
        return (curr < mini) ? mini : curr;
    }

    // Returns minimum element in the Stack
    int getMin() {
        return s.empty() ? -1 : mini;
    }
};
