class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // Use a set to store unique elements
        set<int> s;

        // Insert elements from both arrays
        for (int i = 0; i < a.size(); i++) {
            s.insert(a[i]);
        }

        for (int i = 0; i < b.size(); i++) {
            s.insert(b[i]);
        }

        // Convert set to vector
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};
