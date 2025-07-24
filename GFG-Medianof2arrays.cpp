class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        vector<int> s;

        // Combine both arrays
        for (int i = 0; i < a.size(); i++) {
            s.push_back(a[i]);
        }

        for (int i = 0; i < b.size(); i++) {
            s.push_back(b[i]);
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
