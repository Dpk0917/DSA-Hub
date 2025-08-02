class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxi=arr[0];
        int curr_sum=arr[0];
        
        
        for(int i=1;i<arr.size();i++){
            curr_sum=max(arr[i],curr_sum+arr[i]);
            maxi=max(curr_sum,maxi);
            
        }
        
        return maxi;
    }
};