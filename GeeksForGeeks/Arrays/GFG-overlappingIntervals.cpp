class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        
        for(int i=0;i<n;i++){
            if(ans.empty() || arr[i][0]>ans.back()[1]){
                ans.push_back(arr[i]);
            }else{
                ans.back()[1]=max(ans.back()[1],arr[i][1]);
            }
        }
        return ans;
        
    }
};