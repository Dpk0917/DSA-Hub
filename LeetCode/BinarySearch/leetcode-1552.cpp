class Solution {
private:
    bool CanwePlace(vector<int> &nums, int dist, int k) {
        int cntcow = 1;
        int last = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] - last >= dist) {
                cntcow++;
                last = nums[i];
            }
            if (cntcow >= k) {
                return true;
            }
        }
        return false;
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();

        int low = 1;
        int high = position[n - 1] - position[0];
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (CanwePlace(position, mid, m)) {
                ans = mid;        // valid, try for larger distance
                low = mid + 1;
            } else {
                high = mid - 1;   // too large, reduce
            }
        }
        return ans;
    }
};