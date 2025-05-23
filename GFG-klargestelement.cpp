class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // Your code here
        sort(arr.begin(),arr.end());
        int a=0;
        vector<int>ans;

        for(int i=arr.size()-1;i>=0;i--){
            if(a<k){
                ans.push_back(arr[i]);
                a++;
            }
        }
        return ans;
        
    }
};