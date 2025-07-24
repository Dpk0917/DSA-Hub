class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>s;
        
        for (int i = 0; i < nums1.size(); i++) {
            s.push_back(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            s.push_back(nums2[i]);
        }

        // Sort the combined array
        sort(s.begin(), s.end());

        int n = s.size();
        double ans;

        // If even number of elements
        if (n % 2 == 0) {
            ans = (s[n / 2 - 1] + s[n / 2]) / 2.0;
        } 
        // If odd number of elements
        else {
            ans = s[n / 2];
        }

        return ans;
    }
};