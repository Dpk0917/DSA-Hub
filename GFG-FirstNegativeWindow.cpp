class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        int n = arr.size();

        // Process first window of size k
        for (int i = 0; i < k; i++) {
            if (arr[i] < 0) {
                dq.push_back(i);
            }
        }

        // First answer
        if (!dq.empty()) {
            ans.push_back(arr[dq.front()]);
        } else {
            ans.push_back(0);
        }

        // Process remaining windows
        for (int i = k; i < n; i++) {
            // Remove out-of-window elements
            if (!dq.empty() && dq.front() <= i - k) {
                dq.pop_front();
            }

            // Add current element if it's negative
            if (arr[i] < 0) {
                dq.push_back(i);
            }

            // Store the answer for current window
            if (!dq.empty()) {
                ans.push_back(arr[dq.front()]);
            } else {
                ans.push_back(0);
            }
        }

        return ans;
    }
};
