// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                // mid might be the first bad version
                right = mid;
            } else {
                // first bad version must be after mid
                left = mid + 1;
            }
        }
        return left; // or right, both will be same
    }
};
