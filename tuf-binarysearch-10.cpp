class Solution {
public:
    int findPeakElement(vector<int> &arr) {
      int maxi=INT_MIN;
      int n=arr.size();

      int ans=0;

      for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
      }

      return ans;
    }
};