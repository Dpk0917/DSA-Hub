class Solution {
private:
    int findmax(const vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long calculateTotalHours(const vector<int>& piles, long long mid) {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalHours += (piles[i] + mid - 1) / mid;
        }
        return totalHours;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = findmax(piles);

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalHours = calculateTotalHours(piles, mid);

            if (totalHours <= h) {
                high = mid - 1;  // try to find smaller speed
            } else {
                low = mid + 1;  // need more speed
            }
        }

        return static_cast<int>(low);  // low is the minimum valid speed
    }
};
