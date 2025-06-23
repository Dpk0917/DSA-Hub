bool possible(vector<int>& bloomDay, int mid, int m, int k) {
    int count = 0;
    int NoOfBouquets = 0;

    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= mid) {
            count++;
        } else {
            NoOfBouquets += (count / k);
            count = 0;
        }
    }
    NoOfBouquets += (count / k);  // Handle end segment

    return NoOfBouquets >= m;
}

int roseGarden(vector<int> arr, int k, int m) {
    long long totalFlowersNeeded = 1LL * m * k;
    int n = arr.size();

    if (totalFlowersNeeded > n) {
        return -1;
    }

    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    int low = mini, high = maxi;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (possible(arr, mid, m, k)) {
            high = mid - 1;  // Try to do it earlier
        } else {
            low = mid + 1;
        }
    }

    return low;
}
