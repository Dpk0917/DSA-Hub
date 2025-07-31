class Solution {
public:
    vector<int> nextLargerElement(vector<int>& arr) {
        vector<int> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            int nextgreater = -1;
            for (int j = i + 1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    nextgreater = arr[j];
                    break;
                }
            }
            ans.push_back(nextgreater);
        }

        return ans;
    }
};
