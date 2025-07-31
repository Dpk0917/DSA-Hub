       approach-01 (TC=n^2)
    int maxSubArray(vector<int>& nums) {
        long long maxi = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            long long sum = 0;
            for(int j = i; j < n; j++) {
                sum += nums[j]; // no inner loop
                maxi = max(maxi, sum);
            }
        }
        return maxi;
    }