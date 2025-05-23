class Solution {
public:
    int largest(vector<int>& arr) {
        int n = arr.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++) {
            if(ans <= arr[i]) {
                ans = arr[i];
            }
        }
        return ans;
    }
};

