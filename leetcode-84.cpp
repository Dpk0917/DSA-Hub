class Solution {
private:
    vector<int> nextelement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();  // Index of next smaller
            s.push(i);
        }
        return ans;
    }

    vector<int> prevelement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int curr = arr[i];
            while (s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();  // Index of previous smaller
            s.push(i);
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next = nextelement(heights, n);
        vector<int> prev = prevelement(heights, n);

        int area = 0;
        for (int i = 0; i < n; i++) {
            if (next[i] == -1) {
                next[i] = n; // means no smaller to the right
            }

            int length = heights[i];
            int breadth = next[i] - prev[i] - 1;

            int newarea = length * breadth;
            area = max(area, newarea);
        }

        return area;
    }
};
