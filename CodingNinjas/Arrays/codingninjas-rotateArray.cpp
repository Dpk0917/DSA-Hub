vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
        int n = arr.size();
        vector<int> temp(n);
        for(int i = 0; i < n; i++) {
            temp[i] = arr[(i + k) % n];   // left rotation
        }
        // arr.clear();
        arr = temp;
        return arr;
}
