bool ifPossible(vector<int> &boards, int n, int k, int mid) {
    int painters = 1;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {
        if (currentSum + boards[i] <= mid) {
            currentSum += boards[i];
        } else {
            painters++;
            if (painters > k || boards[i] > mid) {
                return false;
            }
            currentSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int n = boards.size();
    int start = 0, sum = 0;

    for (int i = 0; i < n; i++) {
        sum += boards[i];
    }

    int end = sum, ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (ifPossible(boards, n, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}
