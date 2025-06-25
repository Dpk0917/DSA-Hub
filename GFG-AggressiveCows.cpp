// User function Template for C++

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

    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(), stalls.end());
        int n = stalls.size();

        int low = 1;
        int high = stalls[n - 1] - stalls[0];
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (CanwePlace(stalls, mid, k)) {
                ans = mid;        // valid, try for larger distance
                low = mid + 1;
            } else {
                high = mid - 1;   // too large, reduce
            }
        }
        return ans;
    }
};