class Solution {
private:
    bool possible(vector<int>& bloomDay, int mid, int m, int k) {
        int count = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= mid) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }
        return bouquets >= m;
    }

public:
    int roseGarden(int n, vector<int>& bloomDay, int k, int m) {
        long long required = 1LL * m * k;
        if (required > n) return -1;

        int low = INT_MAX, high = INT_MIN;

        for (int i = 0; i < n; i++) {
            low = min(low, bloomDay[i]);
            high = max(high, bloomDay[i]);
        }

        int result = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k)) {
                result = mid;       // Potential answer, try to minimize
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};
