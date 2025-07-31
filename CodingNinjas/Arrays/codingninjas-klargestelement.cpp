vector<int> kLargest(int arr[], int n, int k) {
    // Write your code here
    sort(arr,arr+n);
    int a=0;
    vector<int>ans;

    for (int i=n-1;i>=0;i--) { 
        if(a<k) {
            ans.push_back(arr[i]);
            a++;
        }
    }
    return ans;
}