class Solution {
public:
    int MOD = 1e9 + 7;

    int numFactoredBinaryTrees(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());

        unordered_map<int, long long> mp;

        for (int i = 0; i < arr.size(); i++) {
            int root = arr[i];
            mp[root] = 1; // single node tree

            for (int j = 0; j < i; j++) {
                int LC = arr[j];

                if (root % LC == 0 && mp.find(root / LC) != mp.end()) {
                    mp[root] = (mp[root] + (mp[LC] * mp[root / LC]) % MOD) % MOD;
                }
            }
        }

        long long ans = 0;
        for (auto &it : mp) {
            ans = (ans + it.second) % MOD;
        }

        return ans;
    }
};