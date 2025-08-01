class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        int result=arr[n-1]-arr[0];
        int max_height=0;
        int min_height=0;
        
        for(int i=0;i<n-1;i++){
            max_height=max(arr[i]+k, arr[n-1]-k);
            min_height=min(arr[0]+k, arr[i+1]-k);
            
            if(min_height>=0){
                result = min(result,max_height-min_height);
            }
        }
        
        return result;
    }
};