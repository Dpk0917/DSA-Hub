class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int n=arr.size();

      if(n==1 || arr[0]<arr[n-1]){
        return arr[0];
      }

      for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            return arr[i];
        }
      }
      return arr[0];
    }
};