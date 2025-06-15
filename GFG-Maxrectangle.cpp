class Solution {
private:
    vector<int> nextelement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = n - 1; i >= 0; i--) {
            while (s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevelement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            while (s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next = nextelement(heights, n);
        vector<int> prev = prevelement(heights, n);

        int area = 0;
        for (int i = 0; i < n; i++) {
            if (next[i] == -1)
                next[i] = n;

            int length = heights[i];
            int breadth = next[i] - prev[i] - 1;
            int newarea = length * breadth;
            area = max(area, newarea);
        }

        return area;
    }

public:
    int maxArea(vector<vector<int>> &mat) {
        if (mat.empty()) return 0;

        int n = mat.size();
        int m = mat[0].size();
        vector<int> heights(m, 0);
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) { // ✅ fixed: was '1'
                    heights[j] += 1;
                } else {
                    heights[j] = 0;
                }
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }

        return maxArea;
    }
};
